/*
 * XREFs of sub_1405DA9A8 @ 0x1405DA9A8
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405DB13C @ 0x1405DB13C (sub_1405DB13C.c)
 */

char __fastcall sub_1405DA9A8(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v4; // ecx
  __int16 v5; // ax
  __int16 v6; // ax
  KIRQL v7; // al
  unsigned int v8; // edx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD **v11; // r14
  _QWORD *v12; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf
  int i; // [rsp+40h] [rbp-29h] BYREF
  __int16 v18; // [rsp+44h] [rbp-25h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  int *p_i; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  _QWORD *v27; // [rsp+80h] [rbp+17h]
  int v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+8Ch] [rbp+23h]
  char *v30; // [rsp+90h] [rbp+27h]
  int v31; // [rsp+98h] [rbp+2Fh]
  int v32; // [rsp+9Ch] [rbp+33h]

  v1 = *(_QWORD *)(a1 + 33600);
  LOBYTE(v2) = 0;
  memset(v19, 0, 7);
  if ( v1 )
  {
    v4 = 1;
    for ( i = 1; v4 < *(_DWORD *)(v1 + 32); i = v4 )
    {
      v5 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      LOWORD(v19[0]) = v5;
      BYTE2(v19[0]) = *(_BYTE *)(a1 + 209);
      *(_DWORD *)((char *)v19 + 3) = v4;
      UserData.Ptr = (ULONGLONG)v19;
      UserData.Size = 7;
      LOBYTE(v2) = sub_1405DB13C(&stru_140038550);
      v4 = i + 1;
    }
    if ( byte_140C5AE30 )
    {
      LOBYTE(v2) = EtwEventEnabled(qword_140C1F580, &stru_140038210);
      if ( (_BYTE)v2 )
      {
        v6 = *(unsigned __int8 *)(a1 + 208);
        UserData.Reserved = 0;
        v23 = 0;
        v18 = v6;
        UserData.Ptr = (ULONGLONG)&v18;
        v21 = a1 + 209;
        UserData.Size = 2;
        v22 = 1;
        v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
        v8 = 0;
        v9 = v7;
        i = 0;
        if ( *(_DWORD *)(v1 + 32) )
        {
          v10 = 0LL;
          do
          {
            v26 = 0;
            p_i = &i;
            v25 = 4;
            v11 = (_QWORD **)(344 * v10 + v1 + 1408);
            v12 = *v11;
            if ( *v11 != v11 )
            {
              do
              {
                v29 = 0;
                v32 = 0;
                v27 = v12 + 2;
                v28 = 4;
                v30 = (char *)v12 + 20;
                v31 = 4;
                EtwWriteEx(qword_140C1F580, &stru_140038210, 0LL, 0, 0LL, 0LL, 5u, &UserData);
                v12 = (_QWORD *)*v12;
              }
              while ( v12 != v11 );
              v8 = i;
            }
            i = ++v8;
            v10 = v8;
          }
          while ( v8 < *(_DWORD *)(v1 + 32) );
        }
        KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
        LOBYTE(v2) = dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            LOBYTE(v2) = KeGetCurrentIrql();
            if ( (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)v2 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = *((_QWORD *)CurrentPrcb + 4375);
              v2 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v15 = (v2 & *(_DWORD *)(v14 + 20)) == 0;
              *(_DWORD *)(v14 + 20) &= v2;
              if ( v15 )
                LOBYTE(v2) = sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
    }
  }
  return v2;
}
