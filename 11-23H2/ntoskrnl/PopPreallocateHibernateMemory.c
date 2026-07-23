/*
 * XREFs of PopPreallocateHibernateMemory @ 0x1408010C4
 * Callers:
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1402F8BC8 (MmGetHighestPhysicalPage.c)
 *     MmObtainChargesToLockPagedPool @ 0x140860C10 (MmObtainChargesToLockPagedPool.c)
 *     HvlpPreallocatePageListResources @ 0x1409418E0 (HvlpPreallocatePageListResources.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  __int64 v0; // rsi
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  ULONG_PTR v10; // rbp
  __int64 Pool2; // rax
  char *v12; // rbx
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+58h] [rbp-70h]
  __int64 v16; // [rsp+D0h] [rbp+8h]
  __int64 v17; // [rsp+D8h] [rbp+10h]
  __int64 v18; // [rsp+E0h] [rbp+18h]
  __int64 v19; // [rsp+E8h] [rbp+20h]

  if ( dword_140C31AB0 == 2 )
    v0 = 102400LL;
  else
    v0 = v14;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < HighestPhysicalPage || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v16 = v2;
  v5 = ((unsigned int)v4 >> 3) + v2;
  v17 = v5;
  v18 = (v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
  v19 = (((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8;
  if ( v3 == 2 )
  {
    v7 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
    v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 232;
  }
  else
  {
    v7 = v15;
  }
  v8 = v6;
  v9 = (v6 + 135) & 0xFFFFFFF8;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpPreallocatePageListResources(), (int)result >= 0) )
  {
    v10 = ((((_DWORD)v9 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    Pool2 = ExAllocatePool2(256LL, v10, 1919052136LL);
    v12 = (char *)Pool2;
    if ( Pool2 )
    {
      if ( (unsigned int)MmObtainChargesToLockPagedPool(Pool2, v10) )
      {
        qword_140C3CFC8 = (__int64)(v12 + 4096);
        Length = v10;
        qword_140C3CFB0 = v12;
        qword_140C3CFC0 = (__int64)v12;
        if ( dword_140C31AB0 == 2 )
          qword_140C3D018 = (__int64)&v12[v0];
        else
          qword_140C3D018 = 0LL;
        LODWORD(xmmword_140C3CFE0) = v4;
        *((_QWORD *)&xmmword_140C3CFE0 + 1) = &v12[v16];
        LODWORD(xmmword_140C3CFD0) = v4;
        *((_QWORD *)&xmmword_140C3CFD0 + 1) = &v12[v17];
        qword_140C3CFF0 = (__int64)&v12[v18];
        if ( dword_140C31AB0 == 2 )
          qword_140C3D020 = (__int64)&v12[v7];
        else
          qword_140C3D020 = 0LL;
        qword_140C3CFF8 = &v12[v9];
        Address = &v12[((_DWORD)v9 + 4159) & 0xFFFFF000];
        qword_140C3D008 = &v12[v8];
        qword_140C3D010 = (__int64)&v12[v19];
        return 0LL;
      }
      ExFreePoolWithTag(v12, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
