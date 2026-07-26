/*
 * XREFs of ??1NDIS_PD_MEM_BLOCK@@QEAA@XZ @ 0x1C01248E4
 * Callers:
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C0124A20 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NDIS_PD_MEM_BLOCK::~NDIS_PD_MEM_BLOCK(NDIS_PD_MEM_BLOCK *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 2) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
      *((unsigned int *)this + 6),
      *((_QWORD *)this + 4));
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
}
