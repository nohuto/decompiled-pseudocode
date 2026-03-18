/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03BEAB0
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BD184 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C02D5A8C (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C03BC258 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BE3B8 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        LARGE_INTEGER *this,
        struct BLTQUEUE *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned __int8 a7)
{
  struct _EX_RUNDOWN_REF **v10; // r15
  __int64 v11; // rcx
  D3DKMT_HANDLE hSource; // r8d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct _EX_RUNDOWN_REF *v14; // rbx
  const wchar_t *v15; // r9
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rbx
  const struct tagRECT *v20; // r12
  void *v21; // rcx
  NTSTATUS v22; // eax
  void *v23; // rcx
  NTSTATUS v24; // eax
  __int64 v25; // rbx
  struct _EX_RUNDOWN_REF *HandleInformation; // [rsp+28h] [rbp-100h]
  PVOID v27; // [rsp+50h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-D0h] BYREF
  struct COREDEVICEACCESS *v29; // [rsp+60h] [rbp-C8h]
  LARGE_INTEGER *v30; // [rsp+68h] [rbp-C0h]
  struct DXGCONTEXT *v31; // [rsp+70h] [rbp-B8h]
  __int128 *v32; // [rsp+78h] [rbp-B0h]
  unsigned int v33[20]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-58h] BYREF

  v30 = this;
  v31 = a3;
  v29 = a6;
  this[3].QuadPart = (LONGLONG)a2;
  this[5].QuadPart = 0LL;
  this[6].QuadPart = 0LL;
  v10 = (struct _EX_RUNDOWN_REF **)&this[4];
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 40LL);
  if ( (a4->Flags.Value & 4) != 0 )
    hSource = a4->hSource;
  else
    hSource = a4->hDestination;
  AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                v11,
                                                (DXGALLOCATIONREFERENCE *)&v27,
                                                hSource);
  DXGALLOCATIONREFERENCE::MoveAssign(v10, AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v27);
  v14 = *v10;
  if ( !*v10 )
  {
    WdLogSingleEntry3(2LL, a3, a4->hSource, -1073741811LL);
    HandleInformation = (struct _EX_RUNDOWN_REF *)a4->hSource;
    v15 = L"Context 0x%I64x: Invalid hAllocation specified: 0x%I64x, returning 0x%I64x";
LABEL_6:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)v15,
      (__int64)a3,
      (__int64)HandleInformation,
      -1073741811LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !a7 )
  {
    v17 = *((_QWORD *)a3 + 2);
    if ( *(_QWORD *)(*(_QWORD *)(v14[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) )
    {
      WdLogSingleEntry3(2LL, v17, *v10, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)a3 + 2),
        (__int64)*v10,
        -1073741811LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(v14[6].Count + 4) & 4) == 0 && !a7 )
  {
    WdLogSingleEntry3(2LL, a3, *v10, -1073741811LL);
    HandleInformation = *v10;
    v15 = L"Context 0x%I64x: Source allocation: 0x%I64x for Present is not DOD primary, returning 0x%I64x";
    goto LABEL_6;
  }
  this[65].QuadPart = 0LL;
  if ( a7 )
  {
    this[65].LowPart = 1;
LABEL_33:
    this[8].LowPart = a4->Flags.Value;
    this[7].LowPart = a4->FlipInterval;
    this[7].HighPart = a4->PresentCount;
    *(_OWORD *)&this[66].LowPart = 0LL;
    *(_OWORD *)&this[68].LowPart = 0LL;
    this[67] = KeQueryPerformanceCounter(0LL);
    v25 = MEMORY[0xFFFFF78000000320];
    this[66].QuadPart = v25 * KeQueryTimeIncrement();
    return 0LL;
  }
  if ( *((_BYTE *)a3 + 441) )
  {
    v18 = PRESENTDODARG::SetPresentDodArg(
            (PRESENTDODARG *)&this[9],
            a3,
            *(unsigned int *)(this[3].QuadPart + 256),
            (__int64)v14,
            0,
            0,
            0LL,
            a4,
            a5,
            a6);
    if ( v18 >= 0 )
    {
      this[65].LowPart |= 1u;
      goto LABEL_33;
    }
LABEL_18:
    DXGALLOCATIONREFERENCE::AssignNull(v10);
    return (unsigned int)v18;
  }
  memset(v33, 0, sizeof(v33));
  DxgkpGetDodPrimaryInfo(
    *((struct DXGDEVICE **)a3 + 2),
    (struct DXGALLOCATION *)v14,
    (struct _D3DKMT_KMDOD_ESCAPE *)v33);
  if ( !v33[8] )
  {
    WdLogSingleEntry1(2LL, 131LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Primary pitch invalid", 131LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v19 = *((_QWORD *)a3 + 7);
  v34 = 0LL;
  v20 = 0LL;
  if ( *(_DWORD *)v19 == -791674878 )
  {
    v21 = *(void **)(v19 + 16);
    if ( v21 )
    {
      if ( *(_QWORD *)(v19 + 24) )
      {
        Object = 0LL;
        v22 = ObReferenceObjectByHandle(v21, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        this[5].QuadPart = (LONGLONG)Object;
        if ( v22 < 0 )
          return 3221225485LL;
        v23 = *(void **)(v19 + 24);
        v27 = 0LL;
        v24 = ObReferenceObjectByHandle(v23, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v27, 0LL);
        this[6].QuadPart = (LONGLONG)v27;
        if ( v24 < 0 )
          return 3221225485LL;
        if ( *(_QWORD *)(v19 + 32) == v19 + 32 && *(int *)(v19 + 40) < 0 )
        {
          v34 = *(_OWORD *)(v19 + 44);
          v20 = (const struct tagRECT *)&v34;
          v32 = &v34;
        }
        v18 = PRESENTDODARG::SetPresentDodArg(
                (PRESENTDODARG *)&this[9],
                a3,
                *(unsigned int *)(this[3].QuadPart + 256),
                (__int64)*v10,
                v33[8],
                v33[10],
                v20,
                a4,
                a5,
                v29);
        if ( v18 >= 0 )
          goto LABEL_33;
        goto LABEL_18;
      }
    }
  }
  WdLogSingleEntry1(2LL, 145LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid Dod esacpe", 145LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
