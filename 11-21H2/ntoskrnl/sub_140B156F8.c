/*
 * XREFs of sub_140B156F8 @ 0x140B156F8
 * Callers:
 *     sub_140B152D4 @ 0x140B152D4 (sub_140B152D4.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402D0E30 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ExAllocateTimer @ 0x1402D5B50 (ExAllocateTimer.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403C77D4 @ 0x1403C77D4 (sub_1403C77D4.c)
 *     sub_1403C78DC @ 0x1403C78DC (sub_1403C78DC.c)
 *     sub_1403C7984 @ 0x1403C7984 (sub_1403C7984.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlIsStateSeparationEnabled @ 0x140699680 (RtlIsStateSeparationEnabled.c)
 *     sub_1406BC8C0 @ 0x1406BC8C0 (sub_1406BC8C0.c)
 *     sub_1406EBB04 @ 0x1406EBB04 (sub_1406EBB04.c)
 *     sub_1406EBB3C @ 0x1406EBB3C (sub_1406EBB3C.c)
 *     sub_1406EBBA8 @ 0x1406EBBA8 (sub_1406EBBA8.c)
 *     sub_1406EBC14 @ 0x1406EBC14 (sub_1406EBC14.c)
 *     sub_14071F640 @ 0x14071F640 (sub_14071F640.c)
 *     sub_14071F674 @ 0x14071F674 (sub_14071F674.c)
 *     sub_140832B54 @ 0x140832B54 (sub_140832B54.c)
 *     sub_140832C30 @ 0x140832C30 (sub_140832C30.c)
 *     sub_140832C50 @ 0x140832C50 (sub_140832C50.c)
 *     sub_140832C70 @ 0x140832C70 (sub_140832C70.c)
 *     sub_140833110 @ 0x140833110 (sub_140833110.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 *     sub_140833304 @ 0x140833304 (sub_140833304.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_140B156F8()
{
  __int64 *v0; // rcx
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdx
  int updated; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  void *v10; // rcx
  void *v11; // rcx
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int i; // r14d
  __int64 v18; // r12
  _OWORD *v19; // rbx
  _OWORD *PoolWithTag; // rax
  __int64 v21; // r15
  __int64 v22; // rcx
  __int128 v23; // xmm1
  BOOLEAN IsStateSeparationEnabled; // al
  const WCHAR *v25; // rdx
  __int64 *v26; // rdi
  __int64 v27; // r14
  __int64 *v28; // rdi
  __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v32[10]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v34[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v35[4]; // [rsp+E8h] [rbp-20h] BYREF

  v0 = v33;
  Buffer = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  v1 = 3LL;
  do
  {
    sub_1406EBB3C((__int64)v0);
    v0 = (__int64 *)(v2 + 24);
  }
  while ( v3 != 1 );
  DestinationString[0] = 0LL;
  memset(v32, 0, 0x48uLL);
  byte_140C49592 = 1;
  updated = SeConvertStringSecurityDescriptorToSecurityDescriptor(
              (__int64)L"O:SYG:SYD:(A;;GR;;;SY)(A;;GR;;;BA)(A;;GR;;;IU)(A;;GR;;;AU)(A;;GR;;;AC)(A;;GR;;;S-1-5-32-104506301"
                        "5-423899465-3012769174-65638258-1865874412-2349348127-763856749-1075684855)(A;;GR;;;S-1-15-3-102"
                        "4-1045063015-423899465-3012769174-65638258-1865874412-2349348127-763856749-1075684855)(A;;GR;;;S"
                        "-1-5-80-2970612574-78537857-698502321-558674196-1451644582)(A;;GR;;;S-1-15-3-1024-1502825166-196"
                        "3708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622)(A;;GR;;;S-1-15-3-1024"
                        "-1065365936-1281604716-3511738428-1654721687-432734479-3232135806-4053264122-3456934681)(A;;GR;;"
                        ";S-1-15-3-1024-3153509613-960666767-3724611135-2725662640-12138253-543910227-1950414635-4190290187)",
              1,
              (__int64)qword_140C49440,
              0LL);
  if ( updated >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    sub_14071F674((ULONG_PTR)&stru_140C49450);
    sub_1403C7984((__int64)qword_140C494B0, (__int64)&Buffer, DestinationString);
    v6 = Buffer;
    v7 = v33;
    v8 = 3LL;
    do
    {
      *v7 = v6;
      v7 += 3;
      --v8;
    }
    while ( v8 );
    v9 = DestinationString[0];
    v10 = *(void **)(DestinationString[0] + 8LL);
    if ( v10 )
    {
      updated = sub_140832B54(v10, *(_QWORD *)(DestinationString[0] + 16LL), v6, qword_140C49440[0], (__int64)v33);
      if ( updated < 0 )
        goto LABEL_29;
      sub_1406BC8C0((__int64)v34, (__int64)v33);
      v6 = Buffer;
    }
    v11 = *(void **)(v9 + 56);
    if ( !v11
      || (updated = sub_140832B54(v11, *(_QWORD *)(v9 + 64), v6, qword_140C49440[0], (__int64)v35), updated >= 0) )
    {
      sub_1403C78DC((__int64)qword_140C494B0, v9);
      v9 = 0LL;
      v12 = 0;
      while ( 1 )
      {
        v13 = sub_1406EBBA8(v12);
        updated = sub_140832C70(&v33[3 * v12], &v32[3 * v13]);
        if ( updated < 0 )
          goto LABEL_31;
        if ( ++v12 >= 3 )
        {
          sub_14071F674((ULONG_PTR)&stru_140C49448);
          v14 = 0LL;
          do
          {
            sub_1406EBB04((__int64 *)((char *)&qword_140C49440[5] + v14), (_QWORD *)((char *)v33 + v14));
            v14 = v15 + 24;
          }
          while ( v16 != 1 );
          sub_140833110(qword_140C494B0, Buffer, (__int64)v32);
          memset(v32, 0, 0x48uLL);
          sub_1403C77D4(0xFFFFF78000000720uLL, Buffer);
          sub_14071F640((volatile signed __int64 *)&stru_140C49448);
          updated = ZwUpdateWnfStateData(&stru_140012640, &Buffer, 8u, &TypeId, 0LL, 0, 0);
          if ( updated >= 0 )
          {
            for ( i = 0; i < 2; ++i )
            {
              v18 = ((unsigned __int8)sub_140833304(qword_140C49570) - 1) & 1;
              v19 = (_OWORD *)qword_140C49440[v18 + 43];
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x310uLL, 0x63466D43u);
              v21 = (__int64)PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_38;
              if ( v19 )
              {
                v22 = 6LL;
                do
                {
                  *PoolWithTag = *v19;
                  PoolWithTag[1] = v19[1];
                  PoolWithTag[2] = v19[2];
                  PoolWithTag[3] = v19[3];
                  PoolWithTag[4] = v19[4];
                  PoolWithTag[5] = v19[5];
                  PoolWithTag[6] = v19[6];
                  PoolWithTag += 8;
                  v23 = v19[7];
                  v19 += 8;
                  *(PoolWithTag - 1) = v23;
                  --v22;
                }
                while ( v22 );
                *PoolWithTag = *v19;
              }
              else
              {
                sub_1406EBC14(PoolWithTag);
              }
              qword_140C49440[v18 + 43] = v21;
              sub_1408331DC(qword_140C49570, v18);
            }
            qword_140C49628 = ExAllocateTimer((__int64)sub_14053FFD0, (__int64)qword_140C49440, 8u);
            if ( !qword_140C49628 )
            {
LABEL_38:
              updated = -1073741670;
              goto LABEL_31;
            }
            IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
            v25 = L"\\REGISTRY\\MACHINE\\OSDATA";
            if ( !IsStateSeparationEnabled )
              v25 = L"\\REGISTRY\\MACHINE\\SOFTWARE";
            RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v25);
            updated = CmRegisterMachineHiveLoadedNotification(
                        (__int64)sub_140832DF0,
                        (__int64)qword_140C49440,
                        (const UNICODE_STRING *)&DestinationString[1],
                        &qword_140C49568);
            if ( updated >= 0 )
            {
              updated = 0;
              break;
            }
          }
          goto LABEL_31;
        }
      }
    }
LABEL_29:
    if ( v9 )
      sub_1403C78DC((__int64)qword_140C494B0, v9);
LABEL_31:
    sub_14071F640((volatile signed __int64 *)&stru_140C49450);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  v26 = v32;
  v27 = 3LL;
  do
  {
    sub_140832C50((__int64)v26);
    v26 += 3;
    --v27;
  }
  while ( v27 );
  v28 = v33;
  do
  {
    sub_140832C30((__int64)v28);
    v28 += 3;
    --v1;
  }
  while ( v1 );
  return (unsigned int)updated;
}
