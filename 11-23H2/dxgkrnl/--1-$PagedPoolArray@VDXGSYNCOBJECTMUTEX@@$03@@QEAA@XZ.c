/*
 * XREFs of ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x1C03235A4
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01C22D0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F484 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rbx
  unsigned int i; // edi

  v2 = *(char **)a1;
  if ( v2 == (char *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
    {
      if ( v2[16 * i + 8] )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v2[16 * i]);
        v2 = *(char **)a1;
      }
    }
  }
  else if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      16LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX);
    operator delete(v3);
  }
}
