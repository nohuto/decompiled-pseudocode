/*
 * XREFs of sub_14039A1C4 @ 0x14039A1C4
 * Callers:
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     sub_1405C8960 @ 0x1405C8960 (sub_1405C8960.c)
 *     sub_1405CA044 @ 0x1405CA044 (sub_1405CA044.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14039A1C4(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  unsigned int v4; // ebp
  _DWORD *Pool2; // rax
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rcx

  v1 = -1LL;
  v2 = a1;
  if ( qword_140D068A8 )
  {
    if ( *(_QWORD *)(qword_140D068A8 + 40) )
    {
      v4 = *(_DWORD *)qword_140D068A8;
      if ( a1 != -1 && a1 < v4 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16 * v4 + 8, 1766674512LL);
        v6 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v4;
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23010, 0LL);
          v8 = *((_QWORD *)KeGetCurrentPrcb() + 4200);
          if ( v8 && (int)sub_14042A5E0(*(_QWORD *)(v8 + 680), v6) >= 0 )
            v1 = v6[2 * v2 + 1];
          sub_1402935D0((ULONG_PTR)&qword_140C23010);
          ExFreePoolWithTag(v6, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
