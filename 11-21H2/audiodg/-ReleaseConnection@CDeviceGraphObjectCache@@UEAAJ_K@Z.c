/*
 * XREFs of ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140023170
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000BCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::ReleaseConnection(CDeviceGraphObjectCache *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  char *v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  int v8; // edx
  __int64 *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int v14; // esi
  int v15; // edi
  __int64 *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  CDeviceGraphObjectCache *v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // r8d
  LPVOID v24; // rdi
  __int64 v25; // rdx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  LPVOID Context; // [rsp+90h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v5 = (char *)this + 152;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v6 = (_QWORD *)*((_QWORD *)this + 6 * (*((unsigned __int16 *)this + 132) ^ 1LL) + 19);
  if ( !v6 )
  {
LABEL_59:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
LABEL_60:
    v15 = -2005139430;
    v27 = 967LL;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    if ( *(_QWORD *)(v7 + 16) == a2 )
      break;
    if ( !v6 )
      goto LABEL_59;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  if ( !v7 )
    goto LABEL_60;
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 + *(_DWORD *)(v7 + 12) || v8 )
  {
    v15 = -2005139417;
    v27 = 972LL;
    goto LABEL_61;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v9 = (__int64 *)((char *)this + 48 * (*((unsigned __int16 *)this + 132) ^ 1LL) + 152);
  v10 = *v9;
  if ( !*v9 )
  {
LABEL_56:
    v15 = -2005139430;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
LABEL_57:
    v27 = 974LL;
LABEL_61:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v15,
      v28);
    v14 = v15;
    goto LABEL_45;
  }
  while ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) != *(_QWORD *)(v7 + 16) )
  {
    v10 = *(_QWORD *)v10;
    if ( !v10 )
      goto LABEL_56;
  }
  v11 = *(_QWORD *)v10;
  if ( v10 == *v9 )
    *v9 = v11;
  else
    **(_QWORD **)(v10 + 8) = v11;
  v12 = *(_QWORD *)(v10 + 8);
  if ( v10 == v9[1] )
    v9[1] = v12;
  else
    *(_QWORD *)(*(_QWORD *)v10 + 8LL) = v12;
  *(_QWORD *)v10 = v9[4];
  v9[4] = v10;
  v13 = v9[2]-- == 1;
  if ( v13 )
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(v9);
  while ( !_InterlockedCompareExchange64(
             (volatile signed __int64 *)this + 31,
             (signed __int64)&v5[48 * (*((unsigned __int16 *)this + 132) ^ 1LL)],
             (signed __int64)&v5[48 * *((unsigned __int16 *)this + 132)]) )
    Sleep(1u);
  *((_WORD *)this + 132) ^= 1u;
  v14 = 0;
  v15 = 0;
  v16 = (__int64 *)&v5[48 * (*((unsigned __int16 *)this + 132) ^ 1LL)];
  v17 = *v16;
  if ( *v16 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)v17;
      if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) == *(_QWORD *)(v7 + 16) )
        break;
      v17 = *(_QWORD *)v17;
      if ( !v18 )
        goto LABEL_54;
    }
    if ( v17 == *v16 )
      *v16 = v18;
    else
      **(_QWORD **)(v17 + 8) = v18;
    v19 = *(_QWORD *)(v17 + 8);
    if ( v17 == v16[1] )
      v16[1] = v19;
    else
      *(_QWORD *)(*(_QWORD *)v17 + 8LL) = v19;
    *(_QWORD *)v17 = v16[4];
    v16[4] = v17;
    v13 = v16[2]-- == 1;
    if ( v13 )
      ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(v16);
  }
  else
  {
LABEL_54:
    v15 = -2005139430;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  if ( v15 < 0 )
    goto LABEL_57;
  v20 = 0LL;
  if ( this != (CDeviceGraphObjectCache *)8 )
    v20 = this;
  if ( *(_QWORD *)(v7 + 144) )
    *(_QWORD *)(v7 + 72) = 0LL;
  (*(void (__fastcall **)(CDeviceGraphObjectCache *))(*(_QWORD *)v20 + 48LL))(v20);
  v21 = *(_QWORD *)(v7 + 88);
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    *(_QWORD *)(v7 + 88) = 0LL;
  }
  v24 = 0LL;
  if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
    v24 = Context;
  v25 = *(_QWORD *)(v7 + 104);
  if ( g_bSkipRTHeap )
  {
    operator delete[](*(void **)(v7 + 104));
  }
  else
  {
    if ( v24 && v25 )
      RtlFreeMemoryBlockLookaside(v24, v25);
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0pqpqqqqqq_EventWriteTransfer(v22, v25, v23, 6, (char)v24, 0, 0, 0);
  }
  *(_QWORD *)(v7 + 104) = 0LL;
  (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
LABEL_45:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v14;
}
