/*
 * XREFs of sub_140826000 @ 0x140826000
 * Callers:
 *     sub_140825E70 @ 0x140825E70 (sub_140825E70.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     sub_1408260F8 @ 0x1408260F8 (sub_1408260F8.c)
 *     sub_140826570 @ 0x140826570 (sub_140826570.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_140827238 @ 0x140827238 (sub_140827238.c)
 *     sub_1408276AC @ 0x1408276AC (sub_1408276AC.c)
 */

__int64 __fastcall sub_140826000(__int64 a1)
{
  int v1; // edx
  int v3; // edi
  __int64 *i; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      v1 = sub_1408260F8(a1, 0LL);
      if ( v1 >= 0 )
        return (unsigned int)sub_140826570(0LL);
    }
  }
  else
  {
    qword_140C445B8 = (__int64)&qword_140C445B0;
    qword_140C445B0 = (__int64)&qword_140C445B0;
    v1 = sub_140827238();
    if ( v1 >= 0 )
    {
      v3 = 0;
      for ( i = &qword_140009148; ; i += 4 )
      {
        LODWORD(v5) = *((_DWORD *)i - 4);
        if ( ((v5 & 4) == 0 || !sub_1402201F8()) && ((v5 & 0x80u) == 0LL || sub_1402201F8()) )
        {
          v1 = sub_14082666C((PCWSTR)*(i - 3), *i);
          if ( v1 < 0 )
            break;
        }
        if ( (unsigned int)++v3 >= 3 )
        {
          if ( v1 >= 0 )
          {
            v1 = sub_1408276AC(v5, &v9);
            if ( v1 >= 0 )
            {
              v1 = v9;
              if ( v9 >= 0 )
              {
                LOBYTE(v6) = 1;
                v7 = sub_140826570(v6);
                v1 = v7;
                if ( v7 >= 0 )
                  return (unsigned int)sub_1408260F8(0LL, (unsigned int)v7);
              }
            }
          }
          return (unsigned int)v1;
        }
      }
    }
  }
  return (unsigned int)v1;
}
