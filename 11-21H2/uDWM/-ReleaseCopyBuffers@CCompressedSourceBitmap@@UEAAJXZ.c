/*
 * XREFs of ?ReleaseCopyBuffers@CCompressedSourceBitmap@@UEAAJXZ @ 0x18005F700
 * Callers:
 *     ?UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18005F680 (-UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::ReleaseCopyBuffers(CCompressedSourceBitmap *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  else
  {
    return 1;
  }
  return v2;
}
