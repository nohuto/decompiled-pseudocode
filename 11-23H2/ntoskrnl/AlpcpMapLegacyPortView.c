/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1407B9BF0
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140716458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140716B7C (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteBlob @ 0x14071C31C (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A024 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 *     AlpcpCreateSection @ 0x14076C5B8 (AlpcpCreateSection.c)
 *     AlpcpCreateSectionView @ 0x1407B9FA4 (AlpcpCreateSectionView.c)
 *     MmGetSectionInformation @ 0x1407BA370 (MmGetSectionInformation.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(char *Object, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  int SectionInformation; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  PVOID v17; // [rsp+48h] [rbp-8h]
  PVOID Objecta; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v19 = a3;
  v3 = *(void **)(a2 + 8);
  BugCheckParameter2 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  Objecta = 0LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &Objecta,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(Objecta, 0LL, &v16);
    if ( SectionInformation >= 0 )
    {
      if ( (DWORD2(v16) & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v7 = (unsigned int)(AlpcpViewGranularity - 1);
        v8 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v9 = v8 & (v7 + *(unsigned int *)(a2 + 16));
        v10 = v8 & (v7 + *(_QWORD *)(a2 + 24));
        if ( v10 + v9 < v9 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v10 + v9 > (unsigned __int64)v17 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(Object, 0, 0, v3, v17, &BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            v11 = BugCheckParameter2;
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, Object, (__int64)&v15);
            if ( SectionInformation < 0 )
            {
              if ( AlpcpDeleteBlob(v11) )
                AlpcpDereferenceBlobEx(v11, 1);
            }
            else
            {
              v12 = v15;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40);
              v13 = *(_QWORD *)(v12 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v13;
              *(_QWORD *)(v19 + 40) = v12;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v12 + 16));
              ++*(_DWORD *)(v12 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v12 + 16));
            }
            AlpcpDereferenceBlobEx(v11, 1);
          }
        }
      }
    }
    ObfDereferenceObject(Objecta);
  }
  return (unsigned int)SectionInformation;
}
