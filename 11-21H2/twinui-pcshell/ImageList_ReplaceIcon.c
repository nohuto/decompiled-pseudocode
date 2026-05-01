/*
 * XREFs of ImageList_ReplaceIcon @ 0x1802DAF28
 * Callers:
 *     CreateBitmapFromIcon @ 0x180499364 (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1802DB000 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1807B2830;
  if ( qword_1807B2830 == -1 )
  {
    GetProcFromComCtl32(&qword_1807B2830, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_1807B2830;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
