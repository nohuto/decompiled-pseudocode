/*
 * XREFs of sub_1405211B4 @ 0x1405211B4
 * Callers:
 *     sub_140520920 @ 0x140520920 (sub_140520920.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405211B4()
{
  __int64 v0; // rax
  __int64 *v1; // r9
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 result; // rax

  LODWORD(v0) = HIDWORD(KeGetPcr()[1].LockArray);
  v1 = (__int64 *)qword_140C4A430;
  v2 = qword_140C4A420 + 160 * v0;
  while ( v1 != &qword_140C4A430 )
  {
    if ( v1[3] )
    {
      if ( byte_140C4A428 )
        v3 = *(_QWORD *)(v2 + 32);
      else
        v3 = *(unsigned int *)(v2 + 16);
      sub_14042A5E0(v3, (unsigned int)dword_140C4A444);
      break;
    }
    v1 = (__int64 *)*v1;
  }
  if ( byte_140C4A428 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_QWORD *)(v2 + 40) = result;
  }
  else
  {
    result = *(unsigned int *)(v2 + 16);
    *(_DWORD *)(v2 + 20) = result;
  }
  return result;
}
