/*
 * XREFs of ?finish@output_archive@tson@@QEAAJXZ @ 0x18006BA84
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x18006CD10 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A8B4C (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall tson::output_archive::finish(tson::output_archive *this)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned int v3; // eax

  result = *((unsigned int *)this + 34);
  if ( (int)result >= 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      return 2147483659LL;
    }
    else
    {
      v2 = *((_QWORD *)this + 18);
      if ( *(_BYTE *)(v2 + 8) )
      {
        *(_QWORD *)(v2 + 2064) = 0LL;
        result = 2147942414LL;
        *(_QWORD *)(v2 + 2072) = 0LL;
        *(_QWORD *)(v2 + 2080) = 0LL;
      }
      else
      {
        v3 = *(_DWORD *)(v2 + 2072) - *(_DWORD *)(v2 + 2064);
        if ( v3 > 0xFFFFFFuLL )
          wil::details::in1diag3::FailFastImmediate_Unexpected(this);
        **(_DWORD **)(v2 + 2064) = v3 & 0x3F | (16 * v3) & 0x3F0000 | (4 * (_WORD)v3) & 0x3F00 | (v3 << 6) & 0x3F000000 | 0x80408040;
        return 0LL;
      }
    }
  }
  return result;
}
