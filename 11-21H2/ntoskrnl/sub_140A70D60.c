/*
 * XREFs of sub_140A70D60 @ 0x140A70D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A70DE0 @ 0x140A70DE0 (sub_140A70DE0.c)
 *     sub_140A70F24 @ 0x140A70F24 (sub_140A70F24.c)
 *     sub_140A71180 @ 0x140A71180 (sub_140A71180.c)
 *     sub_140A72820 @ 0x140A72820 (sub_140A72820.c)
 */

__int64 __fastcall sub_140A70D60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 18) )
    return 0LL;
  v5 = *(_OWORD *)(a2 + 168);
  v6 = *(_OWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 19) || (result = sub_140A71180(0LL, a2, 0LL), (int)result >= 0) )
  {
    if ( *(_QWORD *)(a2 + 184)
      || (*(_OWORD *)(a2 + 168) = v5, *(_OWORD *)(a2 + 184) = v6, result = sub_140A72820(a1, a2), (int)result >= 0) )
    {
      *(_BYTE *)(a2 + 18) = 1;
      v7 = sub_140A70DE0(a2);
      if ( v7 < 0 && *(_DWORD *)(a2 + 220) != 3 )
      {
        v8 = (_QWORD *)sub_140A70F24(a2);
        if ( v8 )
        {
          v9 = *v8;
          if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
            __fastfail(3u);
          *v10 = v9;
          *(_QWORD *)(v9 + 8) = v10;
          --dword_140C4A180;
        }
      }
      return (unsigned int)v7;
    }
  }
  return result;
}
