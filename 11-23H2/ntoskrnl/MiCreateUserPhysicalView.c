/*
 * XREFs of MiCreateUserPhysicalView @ 0x140A41A28
 * Callers:
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140287480 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402E34FC (MiInsertVadEvent.c)
 *     MiGetAweInfoPartition @ 0x14064ADA8 (MiGetAweInfoPartition.c)
 *     MiGetAwePageSize @ 0x14064AE68 (MiGetAwePageSize.c)
 *     MiReferenceAweHandle @ 0x14064C268 (MiReferenceAweHandle.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A41940 (MiCreateProcessDefaultAweInfo.c)
 */

int __fastcall MiCreateUserPhysicalView(__int64 a1, int a2, __int64 a3, _WORD *a4)
{
  PVOID v4; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  char v10; // r10
  unsigned int v11; // r9d
  KPROCESSOR_MODE PreviousMode; // r8
  ACCESS_MASK v13; // edx
  int result; // eax
  __int64 v15; // r15
  unsigned __int64 AwePageSize; // rax
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v22; // rbp
  _WORD *AweInfoPartition; // rax
  __int64 v24; // r9
  unsigned __int64 *v25; // rsi
  int v26; // eax
  unsigned int v27; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29[8]; // [rsp+38h] [rbp-40h] BYREF
  PVOID v30; // [rsp+90h] [rbp+18h] BYREF
  _WORD *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  Object = 0LL;
  v4 = 0LL;
  v29[0] = 0LL;
  v6 = *(void **)(a3 + 104);
  v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 112);
  v30 = 0LL;
  v10 = a2;
  if ( v6 )
  {
    v11 = (a2 & 4 | 8u) >> 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v13 = v11 | 8;
    if ( (v10 & 2) == 0 )
      v13 = v11;
    result = MiReferenceAweHandle(v6, v13, PreviousMode, &Object, &v30);
    if ( result >= 0 )
    {
      v4 = v30;
      if ( !v30 )
      {
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
        return -1073741816;
      }
      v7 = MiSectionControlArea((__int64)v30);
      v15 = *(_QWORD *)(v7 + 8);
      AwePageSize = MiGetAwePageSize(v15);
      v17 = AwePageSize;
      if ( (v8 & 2) != 0 )
      {
        v18 = 16LL;
      }
      else if ( (v8 & 8) != 0 )
      {
        v18 = 512LL;
      }
      else
      {
        if ( (v8 & 0x10) == 0 )
        {
          v18 = AwePageSize;
LABEL_23:
          v19 = v18 << 12;
          if ( *(_QWORD *)(a3 + 16) < v18 << 12 )
            *(_QWORD *)(a3 + 16) = v19;
          v20 = *(_QWORD *)(a3 + 24);
          if ( (v20 & (v19 - 1)) != 0
            || *(_QWORD *)(a3 + 8) - *(_QWORD *)a3 + 1LL == v20 && (*(_QWORD *)a3 & (v19 - 1)) != 0 )
          {
            goto LABEL_20;
          }
          goto LABEL_34;
        }
        v18 = 0x40000LL;
      }
      if ( v18 <= AwePageSize || v18 % AwePageSize || ((v18 - 1) & v18) != 0 || v18 != 512 || AwePageSize != 16 )
      {
LABEL_20:
        ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        return -1073741811;
      }
      goto LABEL_23;
    }
  }
  else
  {
    if ( (v8 & 0x1A) != 0 )
      return -1073741811;
    if ( a2 != 4 )
      return -1073741755;
    result = MiCreateProcessDefaultAweInfo(*(_BYTE *)(a3 + 57), v29);
    if ( result >= 0 )
    {
      v15 = v29[0];
      v18 = 1LL;
      v17 = 1LL;
LABEL_34:
      Pool = (unsigned __int64 *)MiAllocatePool(64, 0x48uLL, 0x76706D4Du);
      v22 = Pool;
      if ( Pool )
      {
        *((_DWORD *)Pool + 16) = 256;
        Pool[4] = a1;
        Pool[5] = v15;
        AweInfoPartition = (_WORD *)MiGetAweInfoPartition(v15);
        v25 = v22 + 6;
        *v31 = *AweInfoPartition;
        if ( v4 )
        {
          MiCheckPurgeAndUpMapCount(v7);
          *v25 = v7;
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        }
        if ( v18 != v17 )
        {
          v26 = *(_DWORD *)v25;
          if ( v18 == 16 )
          {
            v27 = v26 & 0xFFFFFFFC | 1;
          }
          else if ( v18 == 0x40000 )
          {
            v27 = v26 | 3;
          }
          else
          {
            v27 = v26 & 0xFFFFFFFC | 2;
          }
          *(_DWORD *)v25 = v27;
        }
        v22[3] = 0LL;
        MiInsertVadEvent(a1, v22, 0LL, v24);
        return 0;
      }
      else
      {
        if ( v4 )
          ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
        return -1073741670;
      }
    }
  }
  return result;
}
