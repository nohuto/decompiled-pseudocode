/*
 * XREFs of ImageList_ReplaceIcon @ 0x180390FA0
 * Callers:
 *     CreateBitmapFromIcon @ 0x180552990 (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18098C448;
  if ( qword_18098C448 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C448, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18098C448;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
