/*
 * XREFs of sub_14069EE0C @ 0x14069EE0C
 * Callers:
 *     sub_140225E68 @ 0x140225E68 (sub_140225E68.c)
 *     sub_140920CA0 @ 0x140920CA0 (sub_140920CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 *     sub_14069F024 @ 0x14069F024 (sub_14069F024.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F1F4 @ 0x14069F1F4 (sub_14069F1F4.c)
 *     sub_140920FCC @ 0x140920FCC (sub_140920FCC.c)
 */

__int64 __fastcall sub_14069EE0C(__int16 *a1, int *a2)
{
  __int16 i; // dx
  __int16 v5; // dx
  __int64 v6; // rax
  int j; // edi
  int v8; // ebx
  int v10; // eax
  __int16 v11[176]; // [rsp+20h] [rbp-188h] BYREF

  memset(v11, 0, sizeof(v11));
  sub_14069F1F4(v11);
  for ( i = *a1; ; i = v5 - 1 )
  {
    if ( i <= 0 )
    {
      v6 = sub_14069F1CC(a1);
      j = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 20LL) + *(_DWORD *)(*(_QWORD *)(v6 + 16) + 24LL);
LABEL_6:
      *a2 = j;
      v8 = 0;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(sub_14069F1CC(a1) + 16) )
      break;
  }
  v8 = sub_140920FCC(v11, a1, 0LL);
  if ( v8 >= 0 )
  {
    for ( j = 0; ; ++j )
    {
      v10 = sub_14065B900(v11);
      v8 = v10;
      if ( v10 == -2147483622 )
        break;
      if ( v10 < 0 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  sub_14069F024(v11);
  return (unsigned int)v8;
}
