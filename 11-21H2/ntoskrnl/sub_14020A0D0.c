/*
 * XREFs of sub_14020A0D0 @ 0x14020A0D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     IoGetActivityIdIrp @ 0x14020C9B0 (IoGetActivityIdIrp.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062EA90 @ 0x14062EA90 (sub_14062EA90.c)
 */

__int64 __fastcall sub_14020A0D0(int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  char *v4; // rdi
  __int64 EffectiveServerSilo; // r12
  char v9; // al
  unsigned int v10; // ecx
  unsigned __int16 v11; // r9
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 *v17; // rcx
  __int128 *v18; // rax
  unsigned __int16 v19; // r15
  unsigned int v20; // ebx
  bool i; // zf
  unsigned int v22; // ecx
  __int64 v23; // r8
  _DWORD *v24; // rcx
  __int64 result; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  unsigned int v29; // edi
  unsigned int v30; // ecx
  __int64 v31; // rdx
  _DWORD *v32; // rcx
  __int128 *v33; // r9
  __int128 v34; // [rsp+38h] [rbp-59h] BYREF
  __int128 v35; // [rsp+48h] [rbp-49h]
  __int128 v36; // [rsp+58h] [rbp-39h]
  __int64 v37; // [rsp+68h] [rbp-29h]
  __int128 v38; // [rsp+78h] [rbp-19h] BYREF
  __int128 v39; // [rsp+88h] [rbp-9h]
  __int128 *v40; // [rsp+98h] [rbp+7h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+Fh]
  __int128 v42; // [rsp+A8h] [rbp+17h] BYREF

  v3 = *(_QWORD *)(a3 + 152);
  v4 = *(char **)(a3 + 184);
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 1624) == -3LL )
      EffectiveServerSilo = *(_QWORD *)(*(_QWORD *)(v3 + 544) + 2160LL);
    else
      EffectiveServerSilo = PsGetEffectiveServerSilo();
  }
  else
  {
    EffectiveServerSilo = 0LL;
  }
  v9 = *v4;
  v10 = *(_DWORD *)(a3 + 16);
  if ( *v4 != 9 )
  {
    *(_QWORD *)&v34 = __PAIR64__(v10, a2);
    *((_QWORD *)&v34 + 1) = *(unsigned int *)(a3 + 56);
    v11 = (v9 != 3) + 266;
    *(_QWORD *)&v36 = a3;
    *(_QWORD *)&v35 = *((_QWORD *)v4 + 3);
    *((_QWORD *)&v36 + 1) = *((_QWORD *)v4 + 1);
    if ( v3 )
      v12 = *(_DWORD *)(v3 + 1232);
    else
      v12 = -1;
    LODWORD(v37) = v12;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      HIDWORD(v34) = 1;
    }
    else
    {
      v13 = a1 & 0xFFFFFF;
      if ( v13 == 5467492 || v13 == 5460546 )
        HIDWORD(v34) = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v26 = *(_QWORD *)(a3 + 24);
      if ( !v26 )
        goto LABEL_16;
      v14 = *(_QWORD *)(v26 + 192);
      if ( !v14 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v26 + 184) + 48LL);
        if ( !v14 )
          goto LABEL_16;
      }
    }
    else
    {
      v14 = *(_QWORD *)(a3 + 192);
      if ( !v14 )
      {
        v15 = *(unsigned __int8 *)(a3 + 67);
        v16 = *(char *)(a3 + 66);
        if ( v15 <= v16 )
        {
          v17 = (__int64 *)(v4 + 48);
          do
          {
            v14 = *v17;
            if ( *v17 )
              goto LABEL_18;
            LOBYTE(v15) = v15 + 1;
            v17 += 9;
          }
          while ( (unsigned __int8)v15 <= v16 );
        }
LABEL_16:
        *((_QWORD *)&v35 + 1) = 0LL;
LABEL_19:
        v18 = &v34;
        v41 = 52LL;
        v19 = v11;
        goto LABEL_20;
      }
    }
LABEL_18:
    *((_QWORD *)&v35 + 1) = *(_QWORD *)(v14 + 24);
    goto LABEL_19;
  }
  *(_QWORD *)&v38 = __PAIR64__(v10, a2);
  v19 = 270;
  *((_QWORD *)&v38 + 1) = *((_QWORD *)v4 + 1);
  *(_QWORD *)&v39 = a3;
  if ( v3 )
    v27 = *(_DWORD *)(v3 + 1232);
  else
    v27 = -1;
  DWORD2(v39) = v27;
  v18 = &v38;
  v41 = 28LL;
LABEL_20:
  v40 = v18;
  v20 = *(_DWORD *)(qword_140D05008 + 4248);
  for ( i = !_BitScanForward(&v22, v20); !i; i = !_BitScanForward(&v22, v20) )
  {
    v20 &= v20 - 1;
    v23 = v22;
    v24 = (_DWORD *)(32LL * v22 + qword_140D05008 + 4284);
    if ( v24 && (*v24 & 0x100) != 0 )
      sub_1402AB170(
        (unsigned int)&v40,
        qword_140D05008,
        *(unsigned __int8 *)(qword_140D05008 + 2 * v23 + 4232),
        1,
        v19,
        4200451);
  }
  if ( EffectiveServerSilo )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(EffectiveServerSilo + 1464) + 864LL);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 + 4248);
      for ( i = !_BitScanForward(&v30, v29); !i; i = !_BitScanForward(&v30, v29) )
      {
        v31 = v30;
        v29 &= v29 - 1;
        v32 = (_DWORD *)(32LL * v30 + v28 + 4284);
        if ( v32 && (*v32 & 0x100) != 0 )
          sub_1402AB170((unsigned int)&v40, v28, *(unsigned __int8 *)(v28 + 2 * v31 + 4232), 1, v19, 4200451);
      }
    }
  }
  result = qword_140D05008 + 4540;
  if ( qword_140D05008 != -4540 )
  {
    result = *(unsigned int *)result;
    if ( (result & 0x100) != 0 )
    {
      v42 = 0LL;
      if ( (unsigned int)IoGetActivityIdIrp(a3, &v42) )
        v33 = 0LL;
      else
        v33 = &v42;
      return sub_14062EA90(v19, &v40, v3, v33);
    }
  }
  return result;
}
