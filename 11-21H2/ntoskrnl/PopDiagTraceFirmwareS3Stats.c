/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x140A6B91C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  unsigned int *Pool2; // rbx
  unsigned int *i; // rdi
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // kr08_8
  ULONG Tag; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v6; // [rsp+4Ch] [rbp-15h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-11h] BYREF
  int v8; // [rsp+54h] [rbp-Dh] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+Fh] BYREF
  unsigned __int64 *v12; // [rsp+80h] [rbp+1Fh]
  __int64 v13; // [rsp+88h] [rbp+27h]
  int *v14; // [rsp+90h] [rbp+2Fh]
  __int64 v15; // [rsp+98h] [rbp+37h]

  v8 = 0;
  v6 = 0;
  Tag = 0;
  v7 = 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, ULONG *))off_140C020D8[0])(35LL, 0LL, 0LL, &Tag) == -1073741820 )
  {
    if ( Tag )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, Tag, 1953510227LL);
      if ( Pool2 )
      {
        if ( ((int (__fastcall *)(__int64, _QWORD, unsigned int *, ULONG *))off_140C020D8[0])(35LL, Tag, Pool2, &Tag) >= 0 )
        {
          for ( i = Pool2 + 2;
                i < (unsigned int *)((char *)Pool2 + Pool2[1]);
                i = (unsigned int *)((char *)i + *((char *)i + 2)) )
          {
            if ( *(_WORD *)i )
            {
              if ( *(_WORD *)i == 1 )
              {
                v9 = *(_QWORD *)(i + 1) / 0xF4240uLL;
                v4 = *(_QWORD *)(i + 3);
                *(_QWORD *)&UserData.Size = 8LL;
                UserData.Ptr = (ULONGLONG)&v9;
                v12 = &v10;
                v10 = v4 / 0xF4240;
                v13 = 8LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_SUSPEND, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
              }
            }
            else
            {
              v7 = i[1];
              v6 = *((_QWORD *)i + 1) / 0xF4240uLL;
              v2 = *((_QWORD *)i + 2);
              *(_QWORD *)&UserData.Size = 4LL;
              UserData.Ptr = (ULONGLONG)&v7;
              v12 = (unsigned __int64 *)&v6;
              v14 = &v8;
              v8 = v2 / 0xF4240;
              v13 = 4LL;
              v15 = 4LL;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_RESUME, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
              if ( !qword_140C22CE8 )
              {
                v3 = -1LL;
                if ( is_mul_ok(v6, PopQpcFrequency) )
                  v3 = v6 * PopQpcFrequency;
                qword_140C22CE8 = v3 / 0x3E8;
              }
            }
          }
        }
        ExFreePoolWithTag(Pool2, Tag);
      }
    }
  }
}
