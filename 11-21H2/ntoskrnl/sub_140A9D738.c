/*
 * XREFs of sub_140A9D738 @ 0x140A9D738
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     RtlNumberGenericTableElementsAvl @ 0x1402D8A70 (RtlNumberGenericTableElementsAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     sub_140601F88 @ 0x140601F88 (sub_140601F88.c)
 *     sub_140601FCC @ 0x140601FCC (sub_140601FCC.c)
 *     sub_140602068 @ 0x140602068 (sub_140602068.c)
 *     sub_14060207C @ 0x14060207C (sub_14060207C.c)
 *     sub_1406020E8 @ 0x1406020E8 (sub_1406020E8.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A9D738(char a1)
{
  unsigned int v1; // edi
  unsigned int v2; // r15d
  int v3; // ebx
  ULONG v4; // esi
  BOOLEAN i; // dl
  unsigned int v6; // edx
  _QWORD *v7; // rax
  char *Pool2; // r14
  unsigned int v9; // ebx
  _DWORD *v10; // rdx
  char *v11; // rsi
  _QWORD *v12; // r8
  __int64 v13; // rax
  char *v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  char *v18; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  ULONG v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]
  __int64 v23; // [rsp+78h] [rbp-8h]
  ULONG v24; // [rsp+B8h] [rbp+38h]

  v20 = 0;
  v1 = 0;
  v22 = 0;
  v2 = 0;
  v17 = 0LL;
  if ( (qword_140D01450 & 8) != 0 && (dword_140C1AA7C & 0x1000) != 0 )
  {
    v3 = 0;
    if ( a1 )
      v3 = 2;
    v24 = RtlNumberGenericTableElementsAvl(&stru_140D58C80);
    v4 = v24;
    sub_140602068((__int64)&v17);
    sub_14060207C((__int64)&v17);
    sub_140601F88((__int64)&stru_140D58BC0, (__int64)&v17);
    for ( i = 1; ; i = 0 )
    {
      v7 = RtlEnumerateGenericTableAvl(&stru_140D58BC0, i);
      if ( !v7 )
        break;
      v6 = v1 + 1;
      if ( v7[3] <= v7[4] )
        v6 = v1;
      v1 = v6;
    }
    Pool2 = (char *)ExAllocatePool2(64LL, 440 * v1, 0x6E496956u);
    if ( Pool2 )
    {
      v10 = RtlEnumerateGenericTableAvl(&stru_140D58BC0, 1u);
      if ( v10 )
      {
        v11 = Pool2 + 8;
        do
        {
          if ( *((_QWORD *)v10 + 3) > *((_QWORD *)v10 + 4) && v2 < v1 )
          {
            *((_DWORD *)v11 - 2) = *v10;
            v12 = v11 + 32;
            *((_DWORD *)v11 - 1) = v10[1];
            *(_DWORD *)v11 = v10[2];
            *((_DWORD *)v11 + 1) = v10[3];
            *((_DWORD *)v11 + 2) = v10[4];
            *((_QWORD *)v11 + 2) = *((_QWORD *)v10 + 3);
            v13 = *((_QWORD *)v10 + 4);
            v14 = (char *)((char *)v10 - (v11 - 8));
            *((_QWORD *)v11 + 3) = v13;
            v15 = 50LL;
            do
            {
              *v12 = *(_QWORD *)((char *)v12 + (_QWORD)v14);
              ++v12;
              --v15;
            }
            while ( v15 );
            ++v2;
            v11 += 440;
          }
          v10 = RtlEnumerateGenericTableAvl(&stru_140D58BC0, 0);
        }
        while ( v10 );
        v4 = v24;
      }
      sub_1406020E8((__int64)&stru_140D58BC0, (__int64)&v17);
      sub_140601FCC((__int64)&v17);
      v23 = 0LL;
      v20 = dword_140C1A910;
      v18 = Pool2;
      v19 = 440 * v1;
      v21 = v4;
      v9 = DbgkWerCaptureLiveKernelDump(
             L"DriverVerifier",
             485,
             (__int64)Pool2,
             440 * v1,
             (unsigned int)dword_140C1A910,
             v4,
             (__int64)&v18,
             (__int64)sub_140A9DB20,
             v3);
      ExFreePoolWithTag(Pool2, 0x6E496956u);
    }
    else
    {
      v9 = -1073741801;
      sub_1406020E8((__int64)&stru_140D58BC0, (__int64)&v17);
      sub_140601FCC((__int64)&v17);
    }
  }
  else
  {
    return (unsigned int)-1073738628;
  }
  return v9;
}
