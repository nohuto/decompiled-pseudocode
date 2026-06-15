/*
 * XREFs of VPOCONTEXT_rundown @ 0x1800F5130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVpoContextProxy@@QEAA@XZ @ 0x1800ED9C8 (--1CVpoContextProxy@@QEAA@XZ.c)
 */

void __fastcall VPOCONTEXT_rundown(CVpoContextProxy *a1)
{
  if ( a1 )
  {
    CVpoContextProxy::~CVpoContextProxy(a1);
    operator delete(a1);
  }
}
