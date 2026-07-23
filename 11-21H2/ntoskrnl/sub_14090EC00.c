/*
 * XREFs of sub_14090EC00 @ 0x14090EC00
 * Callers:
 *     <none>
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_14069E3E0 @ 0x14069E3E0 (sub_14069E3E0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090EC00(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  SIZE_T v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  KPROCESSOR_MODE v16; // bl
  __int64 v17; // rcx
  size_t v18; // r14
  PVOID v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  signed __int64 v25; // r10
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v30; // [rsp+40h] [rbp-1F8h]
  char v31; // [rsp+41h] [rbp-1F7h]
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-1E8h] BYREF
  __int128 v34; // [rsp+60h] [rbp-1D8h]
  __int128 v35; // [rsp+70h] [rbp-1C8h]
  int v36; // [rsp+80h] [rbp-1B8h]
  __int128 v37; // [rsp+88h] [rbp-1B0h] BYREF
  _OWORD v38[3]; // [rsp+98h] [rbp-1A0h] BYREF
  _OWORD v39[19]; // [rsp+D0h] [rbp-168h] BYREF

  v6 = a2;
  v37 = 0LL;
  v36 = 0;
  memset(v38, 0, sizeof(v38));
  Object = 0LL;
  memset(v39, 0, 0x128uLL);
  LODWORD(v39[6]) = -1;
  *((_QWORD *)&v39[9] + 1) = &v39[9];
  *(_QWORD *)&v39[9] = &v39[9];
  memset((char *)&v39[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Size = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v30 = 0;
  sub_140347770((__int64)&v37);
  v31 = sub_140AB46D0(v9, v8, v10);
  if ( !v31 )
  {
    v15 = -1073741431;
    goto LABEL_22;
  }
  v16 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !SeSinglePrivilegeCheck(stru_140D3CA70, v16) )
  {
    v15 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v15 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( v16 == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a4;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    ProbeForWrite(a3, v6, 4u);
  }
  v15 = sub_1406686C8(a1, 0LL, 0x20019u, (__int64)CmKeyObjectType, v16, (__int64)v39, (__int64 *)&Object);
  if ( v15 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v18 = v6;
    v19 = sub_140367AF0(v12, v6, 0x31384D43u);
    Size[1] = (size_t)v19;
    if ( v19 )
    {
      memset(v19, 0, LODWORD(Size[0]));
      sub_14071B6EC();
      v30 = 1;
      v20 = Object;
      v15 = sub_140AB43C0(Object, 0LL);
      if ( v15 >= 0 )
      {
        if ( (*(_DWORD *)(v20[1] + 184LL) & 0x40000) == 0 )
        {
LABEL_8:
          v15 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Size[1] = 0;
        LODWORD(v34) = 8;
        *((_QWORD *)&v35 + 1) = v18 + Size[1];
        *(_QWORD *)&v35 = v20;
        *(_QWORD *)((char *)&v34 + 4) = 0x800000000LL;
        sub_140AB4550(v38);
        sub_14069E3E0(v20[1], 0, (__int64)Size);
        sub_140AB4580(v38);
        v15 = DWORD1(v34);
        sub_140AB4260(v22, v21, v23, v24);
        v30 = 0;
        *a4 = v34;
        v11 = (char *)Size[1];
        *a3 = *(_DWORD *)Size[1];
        if ( v15 >= 0 )
        {
          v25 = v11 - (char *)a3;
          v26 = 0;
          if ( *(_DWORD *)v11 )
          {
            do
            {
              *(_QWORD *)&v11[24 * ++v26] -= v25;
              v11 = (char *)Size[1];
            }
            while ( v26 < *(_DWORD *)Size[1] );
          }
          memmove(a3, v11, v18);
          v15 = 0;
        }
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_22:
  if ( v30 )
    sub_140AB4260(v12, v11, v13, v14);
  sub_14067FE98(v39, 0LL);
  if ( v31 )
    sub_140AB42A0(v28, v27);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Size[1] )
    SeFreePrivileges((PPRIVILEGE_SET)Size[1]);
  sub_14022EA30((__int64 *)&v37);
  return (unsigned int)v15;
}
