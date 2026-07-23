/*
 * XREFs of sub_1402F0B30 @ 0x1402F0B30
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     sub_1402F1004 @ 0x1402F1004 (sub_1402F1004.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1402F0B30(void *a1, void *a2, void *a3, __int64 a4, __int64 a5, int a6, __int64 a7, _BYTE *a8)
{
  KPROCESSOR_MODE v10; // r14
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  PVOID v13; // rsi
  _BYTE *v14; // rax
  _BYTE *v15; // rdi
  _BYTE *v16; // rsi
  KSPIN_LOCK *v17; // r12
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v19; // r8
  PVOID v20; // rdx
  char v21; // di
  __int64 v22; // r9
  __int64 v23; // rdx
  PVOID v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  __int64 v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v32; // r8
  int v33; // eax
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v35; // [rsp+40h] [rbp-38h] BYREF
  PVOID v36; // [rsp+48h] [rbp-30h] BYREF

  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, ObjectType, v10, &Object, 0LL);
  if ( result >= 0 )
  {
    v36 = 0LL;
    v12 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, v10, &v36, 0LL);
    if ( v12 >= 0 )
    {
      v35 = 0LL;
      v12 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, v10, &v35, 0LL);
      if ( v12 < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        v24 = v36;
LABEL_38:
        ObfDereferenceObjectWithTag(v24, 0x746C6644u);
        return v12;
      }
      v13 = v35;
      v14 = (_BYTE *)sub_1402F1004(v35);
      v15 = v14;
      if ( v14 && (((*v14 & 0x7F) - 2) & 0xFD) != 0 )
      {
        v16 = Object;
        v17 = (KSPIN_LOCK *)((char *)Object + 96);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v22 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          v16 = Object;
        }
        KeAcquireSpinLockAtDpcLevel(v17);
        if ( !v16[104] )
        {
          v16[104] = 1;
          v19 = Object;
          *((_QWORD *)Object + 6) = a4;
          v19[7] = a5;
          *((_DWORD *)v19 + 18) = a6;
          v19[8] = a7;
          v19[10] = v35;
          v20 = v36;
          v19[11] = v36;
          v21 = sub_1402F0D90(v15, v20, v19);
          KeReleaseSpinLockFromDpcLevel(v17);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v32 = *((_QWORD *)CurrentPrcb + 4375);
                v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v29 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
                *(_DWORD *)(v32 + 20) &= v33;
                if ( v29 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          if ( a8 )
          {
            if ( v10 )
            {
              v23 = (__int64)a8;
              if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
                v23 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v23 = *(_BYTE *)v23;
            }
            *a8 = v21;
          }
          return v12;
        }
        KeReleaseSpinLockFromDpcLevel(v17);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v25 = KeGetCurrentIrql();
            if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
            {
              v26 = KeGetCurrentPrcb();
              v27 = *((_QWORD *)v26 + 4375);
              v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
              *(_DWORD *)(v27 + 20) &= v28;
              if ( v29 )
                sub_140418E4C(v26);
            }
          }
        }
        __writecr8(CurrentIrql);
        v12 = -1073741585;
        v13 = v35;
      }
      else
      {
        v12 = -1073741583;
      }
      ObfDereferenceObjectWithTag(v36, 0x746C6644u);
      ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    }
    v24 = Object;
    goto LABEL_38;
  }
  return result;
}
