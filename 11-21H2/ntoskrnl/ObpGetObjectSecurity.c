/*
 * XREFs of ObpGetObjectSecurity @ 0x1407248C0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406CDC5C (ObpCheckTraverseAccess.c)
 *     PopBootStatAccessCheck @ 0x1406D6C24 (PopBootStatAccessCheck.c)
 *     ObGetObjectSecurity @ 0x1406E5110 (ObGetObjectSecurity.c)
 *     MiAllowImageMap @ 0x1406F884C (MiAllowImageMap.c)
 *     ObpCheckObjectReference @ 0x14072266C (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140724550 (SepAppendAceToTokenObjectAcl.c)
 *     PspCheckJobAccessState @ 0x1409B0030 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409EB814 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14080BF48 (ObpReferenceSecurityDescriptorSlow.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpGetObjectSecurity(__int64 a1, PVOID *a2, _BYTE *a3, char a4)
{
  ULONG_PTR v8; // r14
  signed __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // [rsp+40h] [rbp-48h]
  _DWORD v21[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF

  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(_UNKNOWN **)(v8 + 152) != &SeDefaultObjectMethod )
  {
    v21[0] = 447;
    v22 = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)ObpDefaultSecurityDescriptorLength, 1901290063LL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      *a3 = 1;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, unsigned int *, __int64, _DWORD, ULONG_PTR, char))(v8 + 152))(
              a1,
              1LL,
              v21,
              *a2,
              &v22,
              a1 - 8,
              *(_DWORD *)(v8 + 100),
              v8 + 76,
              a4);
      if ( v16 != -1073741789 )
      {
LABEL_9:
        if ( v16 < 0 )
        {
          ExFreePoolWithTag(*a2, 0);
          *a2 = 0LL;
          *a3 = 0;
        }
        else if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
        {
          goto LABEL_24;
        }
        return (unsigned int)v16;
      }
      ExFreePoolWithTag(*a2, 0);
      v17 = v22;
      v18 = v22;
      *a3 = 0;
      ObpDefaultSecurityDescriptorLength = v17;
      v19 = ExAllocatePool2(256LL, v18, 1901290063LL);
      *a2 = (PVOID)v19;
      if ( v19 )
      {
        *a3 = 1;
        LOBYTE(v20) = a4;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, unsigned int *, __int64, _DWORD, ULONG_PTR, int))(v8 + 152))(
                a1,
                1LL,
                v21,
                *a2,
                &v22,
                a1 - 8,
                *(_DWORD *)(v8 + 100),
                v8 + 76,
                v20);
        goto LABEL_9;
      }
    }
    return 3221225626LL;
  }
  _m_prefetchw((const void *)(a1 - 8));
  v9 = *(_QWORD *)(a1 - 8);
  if ( (v9 & 0xF) != 0 )
  {
    do
    {
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v9 - 1, v9);
      if ( v9 == v10 )
        break;
      v9 = v10;
    }
    while ( (v10 & 0xF) != 0 );
  }
  v11 = v9;
  v12 = v9 & 0xF;
  v13 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v12 <= 1 && v13 )
    v13 = ObpReferenceSecurityDescriptorSlow(a1 - 48, v12, v13);
  *a2 = (PVOID)v13;
  *a3 = 0;
  if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
LABEL_24:
    KeBugCheckEx(0x189u, a1 - 48, v8, 1uLL, 0LL);
  return 0LL;
}
