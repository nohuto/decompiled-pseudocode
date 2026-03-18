/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x1C03A7604
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0067D34 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1C006A780 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall Lockable::~Lockable(struct _KTHREAD **this)
{
  DXGFASTMUTEX *v1; // rbx

  *this = (struct _KTHREAD *)&Lockable::`vftable';
  v1 = (DXGFASTMUTEX *)(this + 3);
  if ( this[6] == KeGetCurrentThread() )
    DXGFASTMUTEX::Release(this + 3);
  DXGFASTMUTEX::~DXGFASTMUTEX(v1);
}
