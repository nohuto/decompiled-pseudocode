/*
 * XREFs of ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D88EC
 * Callers:
 *     NtDxgkUnpinResources @ 0x1C01D85A0 (NtDxgkUnpinResources.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D8AD4 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01D9004 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinResource(DXGDEVICE *this, unsigned int a2, char a3, struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  struct DXGALLOCATION *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // edx
  struct _EX_RUNDOWN_REF *v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rbx
  struct DXGALLOCATION *Count; // rbx
  unsigned int v15; // edi
  unsigned int v16; // edi
  DXGDEVICE *v17; // rcx
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rdi
  struct DXGALLOCATION *v22; // rdx
  _QWORD *v23; // rcx
  struct DXGALLOCATION *v24[2]; // [rsp+50h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+80h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v25 = 0LL;
  v8 = (struct DXGALLOCATION *)a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *(_DWORD *)(v4 + 296) )
  {
    v10 = *(_QWORD *)(v4 + 280);
    v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
    if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0 )
    {
      if ( (v11 & 0x1F) == 4 )
      {
        v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
        goto LABEL_9;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v12 = 0LL;
LABEL_9:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v24, v12);
  ExReleasePushLockSharedEx(v4 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v25, v24);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v24);
  v13 = v25;
  if ( !v25 )
  {
LABEL_19:
    v22 = v8;
    v20 = -1073741811LL;
    goto LABEL_27;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    LODWORD(v20) = -1073741811;
    WdLogSingleEntry3(2LL, this, v25, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      (__int64)v13,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  Count = (struct DXGALLOCATION *)v25[3].Count;
  v24[0] = Count;
  if ( !Count )
  {
LABEL_17:
    LODWORD(v20) = 0;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v15 = *(_DWORD *)(*((_QWORD *)Count + 6) + 4LL);
    if ( (v15 & 0x2000) == 0 )
    {
      v23 = (_QWORD *)*((_QWORD *)this + 2);
      if ( (*(_DWORD *)(v23[2] + 436LL) & 0x200) == 0 )
        goto LABEL_19;
      if ( (*((_DWORD *)Count + 18) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v23[81] + 8LL) + 240LL))(v23[82], *((_QWORD *)Count + 3));
        *((_DWORD *)Count + 18) &= ~0x800u;
      }
      goto LABEL_16;
    }
    v16 = (v15 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 465) )
    {
      LODWORD(v20) = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      goto LABEL_18;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, Count) )
    {
      v19 = DXGDEVICE::UnpinDirectFlipAllocation(v17, v16, v18, v24, a4);
      v20 = v19;
      if ( v19 < 0 )
        break;
    }
LABEL_16:
    v24[0] = *((struct DXGALLOCATION **)Count + 8);
    Count = v24[0];
    if ( !v24[0] )
      goto LABEL_17;
  }
  v22 = Count;
LABEL_27:
  WdLogSingleEntry2(3LL, v22, v20);
LABEL_18:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v25);
  return (unsigned int)v20;
}
