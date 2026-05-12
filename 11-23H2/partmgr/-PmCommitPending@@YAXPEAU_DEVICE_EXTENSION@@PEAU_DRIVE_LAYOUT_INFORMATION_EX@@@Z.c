/*
 * XREFs of ?PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003690
 * Callers:
 *     ?PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0002ED0 (-PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0007B80 (_tlgKeywordOn.c)
 *     ?PmSwapList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C000A140 (-PmSwapList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     PartitionReleaseRundownExclusive @ 0x1C000A258 (PartitionReleaseRundownExclusive.c)
 *     PartitionAcquireRundownExclusive @ 0x1C000A7A4 (PartitionAcquireRundownExclusive.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@34@Z @ 0x1C000F3E0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C000F484 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6A.c)
 */

void __fastcall PmCommitPending(struct _DEVICE_EXTENSION *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  struct _DEVICE_EXTENSION *v2; // r12
  struct _DRIVE_LAYOUT_INFORMATION_EX *v3; // r9
  struct _DEVICE_EXTENSION *v4; // r14
  char *v6; // rbp
  _QWORD **v7; // rsi
  _QWORD *v8; // rcx
  char *v9; // rdi
  int v10; // ebx
  char *v11; // rax
  __int64 v12; // r8
  char *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  struct _DRIVE_LAYOUT_INFORMATION_EX *v17; // rcx
  KIRQL v18; // r9
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // r9
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // r9
  char *v25; // [rsp+50h] [rbp-58h] BYREF
  __int64 v26; // [rsp+58h] [rbp-50h] BYREF
  int v27; // [rsp+B0h] [rbp+8h] BYREF
  struct _DRIVE_LAYOUT_INFORMATION_EX *v28; // [rsp+B8h] [rbp+10h]
  int v29; // [rsp+C0h] [rbp+18h] BYREF
  char *v30; // [rsp+C8h] [rbp+20h] BYREF

  v28 = a2;
  v2 = (struct _DEVICE_EXTENSION *)((char *)a1 + 896);
  v3 = a2;
  v4 = (struct _DEVICE_EXTENSION *)*((_QWORD *)a1 + 112);
  if ( v4 != (struct _DEVICE_EXTENSION *)((char *)a1 + 896) )
  {
    do
    {
      v6 = (char *)v4 - 144;
      v7 = (_QWORD **)((char *)v4 + 184);
      v8 = *v7;
      if ( *v7 != v7 )
      {
        v9 = v6 + 312;
        v10 = 0;
        v11 = (char *)*((_QWORD *)v6 + 39);
        if ( v11 != v6 + 312 )
        {
          do
          {
            v11 = *(char **)v11;
            ++v10;
          }
          while ( v11 != v9 );
        }
        LODWORD(v12) = 0;
        do
        {
          v8 = (_QWORD *)*v8;
          v12 = (unsigned int)(v12 + 1);
        }
        while ( v8 != v7 );
        if ( v10 != (_DWORD)v12 )
        {
          if ( v10 )
          {
            if ( (unsigned int)dword_1C0017048 > 5 && (unsigned __int8)tlgKeywordOn(v8, a2, v12, v3) )
            {
              v27 = v23;
              v25 = v6 + 216;
              LODWORD(v30) = *(_DWORD *)(v24 + 4);
              v26 = v24 + 8;
              v29 = v10;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v22,
                (unsigned int)&unk_1C0012D91,
                v23,
                v24,
                (__int64)&v26,
                (__int64)&v30,
                (__int64)&v25,
                (__int64)&v29,
                (__int64)&v27);
            }
          }
          else if ( (unsigned int)v12 > 1
                 && (unsigned int)dword_1C0017048 > 5
                 && (unsigned __int8)tlgKeywordOn(v8, a2, v12, v3) )
          {
            v27 = v20;
            v30 = v6 + 216;
            v29 = *(_DWORD *)(v21 + 4);
            v25 = (char *)(v21 + 8);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v19,
              (unsigned int)&unk_1C001322F,
              v20,
              v21,
              (__int64)&v25,
              (__int64)&v29,
              (__int64)&v30,
              (__int64)&v27);
          }
        }
        if ( (*((_DWORD *)v6 + 10) & 0x10) != 0 )
          goto LABEL_25;
        v13 = *(char **)v9;
        v14 = 0LL;
        if ( *(char **)v9 != v9 )
          v14 = *((_QWORD *)v13 + 3);
        v15 = *v7;
        v16 = 0LL;
        if ( *v7 != v7 )
          v16 = v15[3];
        if ( v14 != v16 )
          goto LABEL_25;
        a2 = 0LL;
        if ( v13 != v9 )
          a2 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)(*(_QWORD *)(*((_QWORD *)v6 + 40) + 16LL)
                                                     + *(_QWORD *)(*((_QWORD *)v6 + 40) + 32LL));
        v17 = 0LL;
        if ( v15 != v7 )
          v17 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)(*(_QWORD *)(*((_QWORD *)v4 + 24) + 16LL)
                                                      + *(_QWORD *)(*((_QWORD *)v4 + 24) + 32LL));
        if ( a2 != v17 )
        {
LABEL_25:
          PartitionAcquireRundownExclusive((char *)v4 - 144);
          KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
          PmSwapList((struct _LIST_ENTRY *)(v6 + 312), (struct _LIST_ENTRY *)((char *)v4 + 184));
          if ( v10 )
            *((_DWORD *)v6 + 10) |= 0x10u;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v18);
          PartitionReleaseRundownExclusive((char *)v4 - 144);
        }
        v3 = v28;
      }
      v4 = *(struct _DEVICE_EXTENSION **)v4;
    }
    while ( v4 != v2 );
  }
}
