/*
 * XREFs of sub_14062F0B8 @ 0x14062F0B8
 * Callers:
 *     sub_14062F040 @ 0x14062F040 (sub_14062F040.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14057F560 @ 0x14057F560 (sub_14057F560.c)
 *     sub_14057F634 @ 0x14057F634 (sub_14057F634.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_14062F0B8()
{
  _BYTE *Pool2; // rbx
  unsigned __int16 **i; // rcx
  int v2; // eax
  unsigned __int16 **v3; // rax
  unsigned __int16 **v4; // rdi
  int v5; // [rsp+48h] [rbp-C0h] BYREF
  int v6; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-A0h]
  __int64 v10; // [rsp+70h] [rbp-98h]
  _BYTE *v11; // [rsp+78h] [rbp-90h]
  int v12; // [rsp+80h] [rbp-88h]
  int v13; // [rsp+84h] [rbp-84h]
  _BYTE P[608]; // [rsp+88h] [rbp-80h] BYREF

  v6 = 0;
  LOBYTE(v5) = 0;
  LODWORD(v7) = 0;
  if ( qword_140D05008 != -4540
    && (*(_DWORD *)(qword_140D05008 + 4544) & 0x80000) != 0
    && EtwProviderEnabled(qword_140C15FB0, 0, 0x400uLL) )
  {
    if ( (unsigned __int16)word_140D05000 > 8u )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, 76LL * (unsigned __int16)word_140D05000, 1953985605LL);
      if ( !Pool2 )
        return;
    }
    else
    {
      Pool2 = P;
    }
    for ( i = 0LL; ; i = v4 )
    {
      v3 = (unsigned __int16 **)sub_140236710(i);
      v4 = v3;
      if ( !v3 )
        break;
      LODWORD(v7) = sub_14057F634(v3, (__int64)Pool2, (unsigned __int16)word_140D05000, &v6);
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v9 = &v7;
      v12 = 76 * v7;
      v10 = 4LL;
      v11 = Pool2;
      v13 = 0;
      EtwWriteEx(qword_140C15FB0, &stru_1400394B8, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      if ( qword_140C52968 )
      {
        v2 = sub_14057F560(v4, (__int64)Pool2, (unsigned __int16)word_140D05000, &v5, &v6);
        LODWORD(v7) = v2;
        if ( (_BYTE)v5 )
        {
          v11 = Pool2;
          v13 = 0;
          v12 = 28 * v2;
          EtwWriteEx(qword_140C15FB0, &stru_140039208, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
      }
    }
    if ( Pool2 != P )
      ExFreePoolWithTag(Pool2, 0);
  }
}
