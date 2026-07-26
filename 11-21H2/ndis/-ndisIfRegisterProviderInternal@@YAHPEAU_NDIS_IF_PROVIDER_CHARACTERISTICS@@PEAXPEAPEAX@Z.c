/*
 * XREFs of ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C002BBF0
 * Callers:
 *     NdisIfRegisterProvider @ 0x1C002BB20 (NdisIfRegisterProvider.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0111D28 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 */

__int64 __fastcall ndisIfRegisterProviderInternal(struct _NDIS_IF_PROVIDER_CHARACTERISTICS *Src, void *a2, void **a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v7; // si
  _WORD *Pool2; // rax
  _QWORD *v9; // r14
  size_t Size; // r8
  void *v11; // rcx
  _QWORD *v12; // rax
  KIRQL v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  v3 = 0;
  if ( !Src )
    return (unsigned int)-1073741811;
  if ( Src->Header.Revision != 1 )
    return (unsigned int)-1073741637;
  if ( Src->Header.Size < 0x28u )
    return (unsigned int)-1073741811;
  *a3 = 0LL;
  v7 = Src->Header.Size + 48;
  if ( v7 >= 0x58u && (Pool2 = (_WORD *)ExAllocatePool2(64LL, v7, 1718174798), (v9 = Pool2) != 0LL) )
  {
    Size = Src->Header.Size;
    v11 = Pool2 + 24;
    *Pool2 = -29183;
    Pool2[1] = v7;
    v12 = Pool2 + 12;
    v9[5] = a2;
    v12[1] = v12;
    *v12 = v12;
    memmove(v11, Src, Size);
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_1C00EE1B0);
    v14 = qword_1C00EE1A0;
    v15 = v9 + 1;
    if ( *(__int64 **)(qword_1C00EE1A0 + 8) != &qword_1C00EE1A0 )
      __fastfail(3u);
    *v15 = qword_1C00EE1A0;
    v9[2] = &qword_1C00EE1A0;
    *(_QWORD *)(v14 + 8) = v15;
    qword_1C00EE1A0 = (__int64)(v9 + 1);
    KeReleaseSpinLock(&qword_1C00EE1B0, v13);
    *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
