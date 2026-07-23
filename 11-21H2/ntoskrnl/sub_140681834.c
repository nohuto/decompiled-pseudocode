/*
 * XREFs of sub_140681834 @ 0x140681834
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 */

void __fastcall sub_140681834(__int64 a1)
{
  __int64 i; // rdi
  _PRIVILEGE_SET *v3; // rcx
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v4 )
    {
      if ( (v4 & 1) != 0 )
        sub_14067F788(v4);
      else
        ObfDereferenceObject((PVOID)v4);
    }
  }
  v3 = *(_PRIVILEGE_SET **)(a1 + 8);
  if ( v3 )
    SeFreePrivileges(v3);
}
