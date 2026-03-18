/*
 * XREFs of ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C008EC08
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1C008EBF0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C00233C0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegion::InternalCombine(CRegion *a1, __int64 a2, int a3)
{
  _DWORD *v4; // rdi
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct REGION *Region; // rax
  struct REGION *v12; // rbx
  _DWORD *v13; // rax
  struct REGION *v15; // [rsp+20h] [rbp-10h] BYREF
  int v16; // [rsp+28h] [rbp-8h]
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v4 = (_DWORD *)(a2 + 12);
  v5 = *((_DWORD *)a1 + 3);
  v6 = 0;
  v7 = a3;
  if ( v5 == 2 && *v4 == 2 )
    goto LABEL_6;
  if ( !*v4 )
  {
    if ( a3 != 5 )
      goto LABEL_6;
    goto LABEL_28;
  }
  if ( *v4 == 1 )
  {
    switch ( a3 )
    {
      case 1:
        goto LABEL_6;
      case 2:
LABEL_24:
        (*(void (__fastcall **)(CRegion *))(*(_QWORD *)a1 + 32LL))(a1);
        goto LABEL_6;
      case 3:
        return (unsigned int)-2147020579;
    }
    if ( a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_24;
    }
LABEL_28:
    (*(void (__fastcall **)(CRegion *))(*(_QWORD *)a1 + 16LL))(a1);
    goto LABEL_6;
  }
  if ( !v5 )
    goto LABEL_5;
  if ( v5 != 1 )
    return (unsigned int)-1073741595;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
      goto LABEL_6;
    if ( a3 <= 2 )
      return (unsigned int)-1073741811;
    if ( a3 > 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_37;
    }
    return (unsigned int)-2147020579;
  }
LABEL_37:
  v7 = 5;
LABEL_5:
  v6 = CRegion::InitializeFromRect(a1, &CRegion::sc_rcEmpty);
  if ( (v6 & 0x80000000) != 0 )
    return v6;
LABEL_6:
  if ( *((_DWORD *)a1 + 3) != 2 || *v4 != 2 )
    return v6;
  v9 = *((_QWORD *)a1 + 2);
  v10 = *(_QWORD *)(a2 + 16);
  v18 = v10;
  v17 = v9;
  if ( !v9 || !v10 || (unsigned int)(v7 - 1) > 4 )
    return (unsigned int)-1073741811;
  if ( v7 == 5 )
  {
    if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v17, (struct RGNOBJ *)&v18) )
    {
      v6 = 0;
      *((_QWORD *)a1 + 2) = v17;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    v16 = 0;
    Region = RGNMEMOBJ::AllocateRegion(0x70u);
    v15 = Region;
    v12 = Region;
    if ( Region )
    {
      *((_DWORD *)Region + 24) = 0;
      *((_DWORD *)Region + 25) = 0;
      *((_DWORD *)Region + 26) = 0;
      *((_DWORD *)Region + 27) = 0;
      *((_DWORD *)Region + 20) = 16;
      *((_DWORD *)Region + 21) = 1;
      v13 = (_DWORD *)*((_QWORD *)Region + 11);
      *v13 = 0;
      v13[3] = 0;
      v13[1] = 0x80000000;
      v13[2] = 0x7FFFFFFF;
      *((_QWORD *)v12 + 5) = v13 + 4;
      *((_DWORD *)v12 + 6) = 112;
      *((_DWORD *)v12 + 8) = 0;
      *((_DWORD *)v12 + 7) = 0;
      *((_DWORD *)v12 + 9) = 0;
      *((_QWORD *)v12 + 7) = (char *)v12 + 48;
      *((_QWORD *)v12 + 6) = (char *)v12 + 48;
    }
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
    if ( v12 )
    {
      if ( (unsigned int)RGNOBJ::bMerge(
                           (RGNOBJ *)&v15,
                           (struct RGNOBJ *)&v17,
                           (struct RGNOBJ *)&v18,
                           byte_1C0253568[v7]) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v15, (struct RGNOBJ *)&v17);
        v6 = 0;
        *((_QWORD *)a1 + 2) = v17;
      }
      else
      {
        v6 = -1073741823;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  }
  return v6;
}
