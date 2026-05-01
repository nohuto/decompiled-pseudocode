/*
 * XREFs of ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026D38
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyAddActivityHost(struct _RM_PSM_APP_FAMILY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  _QWORD *Heap; // rax
  int v7[4]; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR String1[72]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)a1 + 69) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( !Heap )
      return (unsigned int)-1073741801;
    Heap[1] = 0LL;
    *Heap = a2;
    Heap[1] = *((_QWORD *)a1 + 70);
    *((_QWORD *)a1 + 70) = Heap + 1;
  }
  else
  {
    *((_QWORD *)a1 + 69) = a2;
  }
  if ( *((_DWORD *)a2 + 156) == 2 )
  {
    memset_0(String1, 0, 0x82uLL);
    v7[0] = 130;
    if ( (int)PsmGetApplicationNameFromKey((char *)a2 + 88, String1, v7) >= 0
      && CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) == 2 )
    {
      *((_QWORD *)a1 + 71) = a2;
    }
  }
  return v2;
}
