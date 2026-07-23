/*
 * XREFs of sub_140A93A60 @ 0x140A93A60
 * Callers:
 *     sub_140A937C4 @ 0x140A937C4 (sub_140A937C4.c)
 * Callees:
 *     sub_1402D86CC @ 0x1402D86CC (sub_1402D86CC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 *     sub_140A81E94 @ 0x140A81E94 (sub_140A81E94.c)
 *     sub_140A821E0 @ 0x140A821E0 (sub_140A821E0.c)
 *     sub_140A93BA8 @ 0x140A93BA8 (sub_140A93BA8.c)
 *     sub_140A93CE4 @ 0x140A93CE4 (sub_140A93CE4.c)
 */

__int64 __fastcall sub_140A93A60(__int64 a1)
{
  int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v2 = 0;
  v3 = sub_1402D86CC(*(_QWORD *)(a1 + 48));
  v4 = v3;
  if ( v3 && (v3[6] & 1) == 0 && (unsigned int)sub_140A821E0(a1) )
  {
    if ( qword_140C1ACB0 )
    {
      memset(qword_140C1ACB0, 0, 24LL * (unsigned int)dword_140C1ACB8);
      sub_140A93CE4(a1, v5, &v8);
      if ( v8 )
      {
        sub_140A93BA8(v4, v6, &v8);
        v2 = sub_140A81214((_QWORD *)a1, (int *)qword_140C1ACB0, v8);
        if ( v2 >= 0 )
          sub_140A81E94((unsigned __int16 *)(a1 + 88), 0);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
