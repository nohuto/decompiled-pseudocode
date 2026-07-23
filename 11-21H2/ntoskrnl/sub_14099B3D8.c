/*
 * XREFs of sub_14099B3D8 @ 0x14099B3D8
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14099B3D8(__int64 a1)
{
  _DWORD *Pool2; // r14
  unsigned __int16 v3; // ax
  USHORT i; // di
  _OWORD *v5; // rbx
  bool v6; // zf
  unsigned int v7; // ebx
  _OWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned __int16 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned __int16 j; // dx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  ULONG v24; // eax
  __int64 v25; // rcx
  unsigned __int16 v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[68]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v29[32]; // [rsp+488h] [rbp+380h] BYREF

  Pool2 = 0LL;
  if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140038700) )
  {
    v3 = 0;
    v26 = 0;
    for ( i = 0; i < 0x20u; ++i )
    {
      v5 = &v29[v3];
      *v5 = 0LL;
      *((_WORD *)v5 + 4) = i;
      *(_QWORD *)v5 = KeQueryGroupAffinity(i);
      v6 = (unsigned int)KeAndGroupAffinityEx((_WORD *)(a1 + 24), (__int64)v5, (char *)v5) == 0;
      v3 = v26;
      if ( !v6 )
        v3 = ++v26;
    }
    UserData[0].Ptr = (ULONGLONG)&v26;
    v7 = 1;
    *(_QWORD *)&UserData[0].Size = 2LL;
    if ( v3 )
    {
      v8 = v29;
      v9 = v3;
      do
      {
        v10 = v7;
        UserData[v10].Ptr = (ULONGLONG)v8 + 8;
        *(_QWORD *)&UserData[v10].Size = 2LL;
        v11 = v7 + 1;
        v7 += 2;
        UserData[v11].Ptr = (ULONGLONG)v8++;
        *(_QWORD *)&UserData[v11].Size = 8LL;
        --v9;
      }
      while ( v9 );
    }
    v12 = *(_DWORD *)(a1 + 296);
    v13 = 0;
    v14 = v7;
    v15 = 0LL;
    v16 = v7 + 1;
    v27 = 0;
    UserData[v14].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v14].Size = 4LL;
    if ( v12 )
    {
      v17 = *(_QWORD *)(a1 + 312);
      do
      {
        if ( *(_DWORD *)(136LL * v13 + v17 + 16) == 1 )
        {
          v15 = (unsigned int)(v15 + 1);
          v27 = v15;
        }
        ++v13;
      }
      while ( v13 < v12 );
      if ( (_DWORD)v15 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4 * v15, 1699565648LL);
        if ( !Pool2 )
          return;
        v18 = 0;
        for ( j = 0; (unsigned int)j < *(_DWORD *)(a1 + 296); ++j )
        {
          v20 = *(_QWORD *)(a1 + 312);
          v21 = 136LL * j;
          if ( *(_DWORD *)(v21 + v20 + 16) == 1 )
          {
            v22 = v18++;
            Pool2[v22] = *(_DWORD *)(v21 + v20 + 20);
          }
        }
        v23 = v16;
        v24 = 4 * v27;
        ++v16;
        UserData[v23].Ptr = (ULONGLONG)Pool2;
        UserData[v23].Size = v24;
        *(&UserData[0].Reserved + 1 * v23) = 0;
      }
    }
    v25 = v16;
    UserData[v25].Ptr = a1 + 432;
    *(_QWORD *)&UserData[v25].Size = 4LL;
    EtwWrite(qword_140C1F580, &stru_140038700, 0LL, v16 + 1, UserData);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x654D5050u);
  }
}
