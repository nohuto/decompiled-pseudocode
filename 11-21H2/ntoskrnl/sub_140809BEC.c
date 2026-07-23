/*
 * XREFs of sub_140809BEC @ 0x140809BEC
 * Callers:
 *     sub_1408097A0 @ 0x1408097A0 (sub_1408097A0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_14039630C @ 0x14039630C (sub_14039630C.c)
 *     sub_140399BC4 @ 0x140399BC4 (sub_140399BC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F1648 @ 0x1407F1648 (sub_1407F1648.c)
 *     sub_140807088 @ 0x140807088 (sub_140807088.c)
 */

void sub_140809BEC()
{
  PVOID v0; // rsi
  __int64 v1; // rdi
  __int64 *v2; // rbx
  __int64 *v3; // rax
  ULONG_PTR *v4; // rdi
  __int64 v5; // rdx
  __int64 **v6; // rcx
  __int64 **i; // rbx
  __int64 ***v8; // rsi
  __int64 **v9; // rax
  __int64 ***v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 *j; // rbx
  unsigned int k; // esi
  __int64 v15; // r13
  __int64 v16; // r15
  _OWORD *v17; // rdx
  void *v18; // rcx
  __int64 *v19; // [rsp+28h] [rbp-E0h] BYREF
  __int64 **v20; // [rsp+30h] [rbp-D8h]
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v22; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v23[52]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v23, 0, 0x198uLL);
  v0 = 0LL;
  LODWORD(v21) = 0;
  v20 = &v19;
  v22 = 0LL;
  v19 = (__int64 *)&v19;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C828, 0LL);
  v1 = qword_140C1C810;
  if ( (__int64 *)qword_140C1C810 != &qword_140C1C810 )
  {
    do
    {
      ExAcquirePushLockExclusiveEx(v1 + 16, 0LL);
      LODWORD(v23[0]) = *(_DWORD *)(v1 + 24);
      for ( i = *(__int64 ***)(v1 + 40); i != (__int64 **)(v1 + 40); i = (__int64 **)*i )
      {
        v8 = (__int64 ***)i;
        sub_140399BC4((PKSPIN_LOCK)i[15], &v22, (unsigned int *)&v21);
        if ( sub_14039630C((PKSPIN_LOCK)i[15]) )
        {
          v9 = (__int64 **)*i;
          v10 = (__int64 ***)(i + 1);
          i = (__int64 **)i[1];
          if ( (*v8)[1] != (__int64 *)v8
            || *i != (__int64 *)v8
            || (*i = (__int64 *)v9, v9[1] = (__int64 *)i, v11 = v20, *v20 != (__int64 *)&v19) )
          {
LABEL_37:
            __fastfail(3u);
          }
          *v10 = v20;
          *v8 = &v19;
          *v11 = v8;
          v20 = (__int64 **)v8;
        }
      }
      v12 = xmmword_140C1C3A0 - 0x44FD8B8ECC99192BLL;
      if ( (_QWORD)xmmword_140C1C3A0 == 0x44FD8B8ECC99192BLL )
        v12 = *((_QWORD *)&xmmword_140C1C3A0 + 1) - 0x294D1B1462EFA9B0LL;
      if ( !v12 )
      {
        for ( j = *(__int64 **)(v1 + 56); j != (__int64 *)(v1 + 56); j = (__int64 *)*j )
        {
          for ( k = 0; k < *((_DWORD *)j + 10); ++k )
          {
            v15 = (__int64)&j[4 * k + 6];
            if ( LODWORD(v23[2]) >= 0x10 )
              sub_140807088((ULONG *)v23);
            v16 = 3LL * LODWORD(v23[2]);
            v23[v16 + 3] = v15;
            v17 = &v23[v16 + 4];
            *v17 = 0LL;
            if ( (int)sub_14042A5E0(*(_QWORD *)(v15 + 16), v17) < 0 )
            {
              v18 = (void *)v23[v16 + 5];
              if ( v18 )
                sub_140346D64(v18, v23[0]);
            }
            else
            {
              ++LODWORD(v23[2]);
            }
          }
        }
        sub_140807088((ULONG *)v23);
      }
      sub_14036C0A0(v1 + 16);
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &qword_140C1C810 );
    v0 = v22;
  }
  sub_14036C0A0((ULONG_PTR)&stru_140C1C828);
  while ( 1 )
  {
    v2 = v19;
    if ( v19 == (__int64 *)&v19 )
      break;
    if ( (__int64 **)v19[1] != &v19 )
      goto LABEL_37;
    v3 = (__int64 *)*v19;
    if ( *(__int64 **)(*v19 + 8) != v19 )
      goto LABEL_37;
    v19 = (__int64 *)*v19;
    v3[1] = (__int64)&v19;
    v4 = &qword_140C1C840 + 4 * *((int *)v2 + 10);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    v5 = v2[2];
    if ( *(__int64 **)(v5 + 8) != v2 + 2 )
      goto LABEL_37;
    v6 = (__int64 **)v2[3];
    if ( *v6 != v2 + 2 )
      goto LABEL_37;
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    sub_14036C0A0((ULONG_PTR)v4);
    sub_1407F1648((_QWORD *)v2[15]);
  }
  if ( v0 )
    sub_140346D64(v0, 0x70687373u);
}
