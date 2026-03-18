/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000CE0C
 * Callers:
 *     NtDCompositionCreateChannel @ 0x1C000CBA0 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C000CCC0 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C000CF50 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000E0C8 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00B0BA8 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1, unsigned int *a2, void **a3)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  PVOID v7; // rdi
  __int64 Pool2; // rbx
  __int64 v9; // r8
  DirectComposition::CApplicationChannel *v10; // rax
  unsigned int *v11; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v13; // rax
  struct DirectComposition::CProcessData *v14; // rsi
  struct _ERESOURCE *v15; // rbx
  __int64 v17; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( !DefaultConnection )
    return (unsigned int)-1073741790;
  v7 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63614344) == 0x63614344
    && (v17 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1667318596 )
    {
      if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_3;
    }
    Pool2 = ExAllocatePool2(261LL, 1840LL);
    if ( !Pool2 )
      goto LABEL_21;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v7,
                               Pool2,
                               BackTrace) )
      {
LABEL_20:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_21;
      }
      goto LABEL_5;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v7,
                             Pool2,
                             BackTrace) )
      goto LABEL_20;
    Pool2 += 16LL;
  }
  else
  {
LABEL_3:
    Pool2 = ExAllocatePool2(261LL, 1824LL);
  }
  if ( !Pool2 )
  {
LABEL_21:
    inserted = -1073741801;
    goto LABEL_10;
  }
LABEL_5:
  LOBYTE(v9) = 1;
  v10 = DirectComposition::CApplicationChannel::CApplicationChannel(
          (DirectComposition::CApplicationChannel *)Pool2,
          DefaultConnection,
          v9,
          *a2);
  v11 = (unsigned int *)v10;
  if ( !v10 )
    goto LABEL_21;
  inserted = DirectComposition::CApplicationChannel::Initialize(v10, a2, a3);
  if ( inserted < 0 )
    goto LABEL_25;
  v13 = DirectComposition::CProcessData::Current();
  v14 = v13;
  if ( !v13 )
  {
    inserted = -1073741823;
    goto LABEL_25;
  }
  v15 = (struct _ERESOURCE *)*((_QWORD *)v13 + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v15, 1u);
  inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
               *(_QWORD *)v14,
               v11[7],
               v11);
  ExReleaseResourceLite(*((PERESOURCE *)v14 + 1));
  KeLeaveCriticalRegion();
  if ( inserted < 0 )
  {
LABEL_25:
    DirectComposition::CChannel::Release((DirectComposition::CChannel *)v11);
    goto LABEL_10;
  }
  *a1 = v11[7];
LABEL_10:
  DirectComposition::CConnection::Release(DefaultConnection);
  return (unsigned int)inserted;
}
