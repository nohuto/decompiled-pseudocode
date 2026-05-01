/*
 * XREFs of ?UpdateDropTarget@AppResizeData@@UEAAXAEBUCPoint@Geometry@@PEAUResizeDropTarget@@@Z @ 0x1805DECB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802E2D4C (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

void __fastcall AppResizeData::UpdateDropTarget(
        AppResizeData *this,
        const struct tagPOINT *a2,
        struct ResizeDropTarget *a3)
{
  char *v6; // r8
  struct tagPOINT v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  _BYTE v11[40]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)a3 = -1;
  *(_OWORD *)((char *)a3 + 4) = 0LL;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v11);
  if ( *((_QWORD *)this + 3) == *a2 )
  {
    v6 = (char *)this + 64;
  }
  else
  {
    v7 = *a2;
    v6 = (char *)this + 64;
    *((_DWORD *)this + 16) = -1;
    *((struct tagPOINT *)this + 3) = v7;
    *(_OWORD *)((char *)this + 68) = 0LL;
    v8 = *((_QWORD *)this + 4);
    v9 = v8 + 20LL * *((_QWORD *)this + 5);
    while ( v8 != v9 )
    {
      if ( Geometry::CRect::Contains((Geometry::CRect *)(v8 + 4), a2) )
      {
        *(_OWORD *)v6 = *(_OWORD *)v10;
        *((_DWORD *)v6 + 4) = *(_DWORD *)(v10 + 16);
        break;
      }
      v8 = v10 + 20;
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)v6;
  *((_DWORD *)a3 + 4) = *((_DWORD *)v6 + 4);
}
