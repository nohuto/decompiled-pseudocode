/*
 * XREFs of NotifyRoutine @ 0x1409F1600
 * Callers:
 *     sub_1409F10B0 @ 0x1409F10B0 (sub_1409F10B0.c)
 *     sub_1409F1110 @ 0x1409F1110 (sub_1409F1110.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14088394C @ 0x14088394C (sub_14088394C.c)
 *     sub_1409EFAE0 @ 0x1409EFAE0 (sub_1409EFAE0.c)
 *     sub_1409F1878 @ 0x1409F1878 (sub_1409F1878.c)
 *     sub_1409F1A68 @ 0x1409F1A68 (sub_1409F1A68.c)
 *     sub_1409F1D50 @ 0x1409F1D50 (sub_1409F1D50.c)
 */

void __fastcall NotifyRoutine(__int64 FullImageName, HANDLE ProcessId, char *ImageInfo)
{
  __int64 v3; // rbx
  char *v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (*(_DWORD *)ImageInfo & 0x400) == 0 )
    return;
  v7 = ImageInfo - 8;
  if ( (int)sub_14088394C(&v12) >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = qword_140C15D78 + 16;
    v9 = *((_QWORD *)CurrentThread + 23);
    if ( ProcessId )
    {
      if ( ProcessId == *(HANDLE *)(v9 + 1088) && (int)sub_1409F1D50(*((_QWORD *)CurrentThread + 23)) >= 0 )
      {
        v10 = *(_QWORD *)(v9 + 2544);
        goto LABEL_9;
      }
    }
    else if ( (*(_DWORD *)ImageInfo & 0x100) != 0 )
    {
      v10 = qword_140C15D78 + 752;
LABEL_9:
      if ( (int)sub_1409EFAE0(v3, v9, v10, FullImageName, (__int64)v7, &v11) >= 0 )
        sub_1409F1A68(v10, v3, v11, *((_QWORD *)ImageInfo + 1));
    }
  }
  if ( v11 )
    sub_1409F1878(v3);
  if ( v12 )
  {
    sub_1402AD030(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}
