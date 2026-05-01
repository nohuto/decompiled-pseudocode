/*
 * XREFs of sub_180003A40 @ 0x180003A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AD8 @ 0x180003AD8 (sub_180003AD8.c)
 *     sub_180003C70 @ 0x180003C70 (sub_180003C70.c)
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 *     sub_180019178 @ 0x180019178 (sub_180019178.c)
 */

__int64 __fastcall sub_180003A40(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rbx
  int v10; // esi
  __int64 result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v8 = sub_180003AD8(v12);
  if ( v8 < 0 )
  {
    sub_180019178(v12);
    return (unsigned int)v8;
  }
  else
  {
    v9 = v12[0];
    v10 = sub_180003C70(v12[0], a3, a4);
    if ( v10 < 0 )
    {
      sub_180019178(v12);
      return (unsigned int)v10;
    }
    else
    {
      if ( (*a1 & 4) == 0 )
        sub_180008980(v9 + 108);
      *(_DWORD *)(v9 + 128) = *(_DWORD *)a1;
      result = 0LL;
      *(_QWORD *)(v9 + 120) = a2;
    }
  }
  return result;
}
