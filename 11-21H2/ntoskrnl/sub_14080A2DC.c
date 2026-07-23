/*
 * XREFs of sub_14080A2DC @ 0x14080A2DC
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_14080A2DC()
{
  int v0; // edx
  __int64 *v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  void *v7; // rbx

  v0 = 0;
  v1 = qword_140003350;
  v2 = 16LL;
  do
  {
    v3 = *(unsigned __int8 *)v1;
    v1 += 3;
    v0 += v3;
    --v2;
  }
  while ( v2 );
  v4 = (unsigned int)(4 * v0);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x69547845u);
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v4);
    v7 = (void *)_InterlockedExchange64(&qword_140C158A0, v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x69547845u);
  }
}
