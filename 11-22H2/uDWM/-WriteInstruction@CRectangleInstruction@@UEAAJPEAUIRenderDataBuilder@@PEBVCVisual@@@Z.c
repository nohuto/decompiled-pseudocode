/*
 * XREFs of ?WriteInstruction@CRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800547F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleInstruction::WriteInstruction(
        CRectangleInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  if ( v3 || (v3 = *((_QWORD *)this + 3)) != 0 )
    v4 = *(unsigned int *)(*(_QWORD *)(v3 + 16) + 24LL);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, char *, __int64))(*(_QWORD *)a2 + 56LL))(
           a2,
           (char *)this + 32,
           v4);
}
