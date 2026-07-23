/*
 * XREFs of sub_140806330 @ 0x140806330
 * Callers:
 *     sub_140A523B0 @ 0x140A523B0 (sub_140A523B0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14080637C @ 0x14080637C (sub_14080637C.c)
 *     sub_14090A480 @ 0x14090A480 (sub_14090A480.c)
 */

__int64 sub_140806330()
{
  struct _DEVICE_OBJECT *v0; // rax
  unsigned int v1; // ebx
  struct _DEVICE_OBJECT *v2; // rdi

  v0 = (struct _DEVICE_OBJECT *)sub_14080637C();
  v1 = 0;
  v2 = v0;
  if ( !v0 )
    return 3221225473LL;
  if ( (int)sub_14090A480(v0) < 0
    || (int)sub_14090A480(v2) < 0
    || (int)sub_14090A480(v2) < 0
    || (int)sub_14090A480(v2) < 0 )
  {
    v1 = -1073741823;
  }
  ObfDereferenceObject(v2);
  return v1;
}
