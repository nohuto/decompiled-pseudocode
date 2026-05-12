/*
 * XREFs of sub_1C004BA18 @ 0x1C004BA18
 * Callers:
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C004BA18(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  v1 = *(_QWORD **)(a1 + 4896);
  if ( v1 )
  {
    v3 = (void *)v1[14];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x4F506152u);
      v1[14] = 0LL;
      *((_DWORD *)v1 + 26) = 0;
    }
    *(_QWORD *)(a1 + 4896) = 0LL;
    PoFxUnregisterDevice(*v1);
    ExFreePoolWithTag(v1, 0x4F506152u);
  }
}
