/*
 * XREFs of WmiQueryTraceInformation @ 0x140815520
 * Callers:
 *     sub_140815178 @ 0x140815178 (sub_140815178.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1406E6D40 @ 0x1406E6D40 (sub_1406E6D40.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  unsigned __int64 v6; // r15
  __int64 v8; // r13
  __int64 v9; // rdx
  _DWORD *v10; // r9
  int v11; // r10d
  __int64 v12; // r12
  int v13; // r10d
  unsigned int *v14; // rax
  unsigned int v15; // esi
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  __int64 *v21; // rax
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  int v25; // r10d
  int v26; // r10d
  unsigned int v27; // esi
  unsigned int j; // r14d
  unsigned int *v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // ecx
  NTSTATUS result; // eax
  unsigned int *v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  __int16 v39; // cx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // r12
  unsigned int v43; // eax
  unsigned int i; // r15d
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v48; // rax
  NTSTATUS v49; // [rsp+24h] [rbp-44h]
  unsigned int v50; // [rsp+28h] [rbp-40h]
  unsigned int v51; // [rsp+28h] [rbp-40h]
  __int64 v52; // [rsp+38h] [rbp-30h] BYREF
  __int64 v53; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *v54; // [rsp+48h] [rbp-20h]
  unsigned int Buffera; // [rsp+90h] [rbp+28h]

  v6 = TraceInformationLength;
  v8 = 0LL;
  v52 = 0LL;
  v49 = 0;
  v12 = *((_QWORD *)sub_140347DB0() + 108);
  if ( v10 )
    *v10 = 0;
  if ( v11 > 7 )
  {
    v13 = v11 - 8;
    if ( !v13 )
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v14 = (unsigned int *)sub_140797594(v12, *(_DWORD *)Buffer, 0);
      if ( !v14 )
        return -1073741275;
      v15 = v14[60];
      sub_1407981E8(v14, 0);
      if ( TraceInformation )
        *(_DWORD *)TraceInformation = v15;
      if ( RequiredLength )
        *RequiredLength = 4;
      return v49;
    }
    v16 = v13 - 1;
    if ( !v16 )
    {
      if ( !Buffer )
        return -1073741581;
      if ( !RequiredLength )
        return -1073741582;
      *v10 = 32;
      if ( (unsigned int)v6 < 0x20 )
        return -1073741820;
      if ( !TraceInformation )
        return -1073741584;
      v52 = *(_QWORD *)Buffer;
      v51 = (unsigned __int16)v52;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v48 = (unsigned int *)sub_140797594(v12, v51, 0);
      if ( v48 )
      {
        *(_DWORD *)TraceInformation = 1;
        *((_DWORD *)TraceInformation + 1) = v48[1];
        *((_DWORD *)TraceInformation + 2) = v48[56];
        *((_DWORD *)TraceInformation + 3) = v48[59];
        *((_DWORD *)TraceInformation + 4) = v48[3];
        *((_DWORD *)TraceInformation + 5) = v48[52];
        *((_DWORD *)TraceInformation + 7) = v48[50];
        *((_DWORD *)TraceInformation + 6) = v48[53];
        sub_1407981E8(v48, 0);
      }
      else
      {
        v49 = -1073741162;
      }
      KeLeaveCriticalRegion();
      return v49;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)byte_140C15F70 <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v21 = &qword_140C4EF30;
        goto LABEL_24;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( RequiredLength )
          *v10 = 120;
        if ( (unsigned __int8)byte_140C15F70 <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 120 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        *(_OWORD *)v9 = *(_OWORD *)off_140A3B710;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)off_140A3B720;
        *(_OWORD *)(v9 + 32) = *(_OWORD *)&off_140A3B730;
        *(_OWORD *)(v9 + 48) = *(_OWORD *)&off_140A3B740;
        *(_OWORD *)(v9 + 64) = *(_OWORD *)off_140A3B750;
        *(_OWORD *)(v9 + 80) = *(_OWORD *)&off_140A3B760;
        *(_OWORD *)(v9 + 96) = *(_OWORD *)off_140A3B770;
        *(_QWORD *)(v9 + 112) = sub_140630050;
        return 0;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)byte_140C15F70 <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v21 = (__int64 *)&off_140C002D0;
        goto LABEL_24;
      }
      if ( v20 == 2 )
      {
        if ( RequiredLength )
          *v10 = 8;
        if ( (unsigned __int8)byte_140C15F70 <= 1u )
          return -1073741661;
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !TraceInformation )
          return -1073741584;
        v21 = (__int64 *)&unk_140C0C5B8;
LABEL_24:
        *(_QWORD *)v9 = v21;
        return 0;
      }
      return -1073741821;
    }
    v53 = 0LL;
    if ( (_DWORD)v6 != 8 )
      return -1073741820;
    if ( !Buffer )
      return -1073741776;
    v50 = *(_DWORD *)Buffer;
    v42 = sub_140797594(v12, *(_DWORD *)Buffer, 0);
    if ( !v42 )
      return -1073741275;
    v43 = dword_140D06884;
    Buffera = dword_140D06884;
    for ( i = 0; i < v43; ++i )
    {
      v45 = *(_QWORD *)(v42 + 1096);
      if ( v45 == qword_140D05008 )
        v46 = *(_QWORD *)(sub_140348800(i) + 34472) + 320LL;
      else
        v46 = *(_QWORD *)(v45 + 4144) + ((unsigned __int64)i << 6);
      v8 += *(_QWORD *)(*(_QWORD *)(v46 + 8) + 8LL * v50);
      v53 = v8;
      v43 = Buffera;
    }
    sub_1407981E8((unsigned int *)v42, 0);
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v8;
    goto LABEL_67;
  }
  if ( v11 != 7 )
  {
    if ( v11 )
    {
      v22 = v11 - 1;
      if ( !v22 )
      {
        if ( (_DWORD)v6 != 8 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v38 = *(_DWORD *)Buffer;
        if ( *(_DWORD *)Buffer >= *(_DWORD *)(v12 + 16) )
          return -1073741816;
        v52 = 0LL;
        v39 = v38;
        if ( !v38 )
          v39 = -1;
        LOWORD(v52) = v39;
        if ( TraceInformation )
          *(_QWORD *)v9 = v52;
        if ( RequiredLength )
          *v10 = 8;
        return v49;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
              return -1073741821;
            if ( v26 == 1 )
            {
              if ( (unsigned int)v6 < 8 || !TraceInformation )
                return -1073741820;
              v27 = 0;
              for ( j = 1; j < *(_DWORD *)(v12 + 16); ++j )
              {
                v29 = (unsigned int *)sub_140797594(v12, j, 0);
                if ( v29 )
                {
                  if ( 8 * (unsigned __int64)(v27 + 1) <= v6 )
                    *((_QWORD *)TraceInformation + v27) = j;
                  sub_1407981E8(v29, 0);
                  ++v27;
                }
              }
              v30 = 8LL * v27;
              v31 = 0;
              if ( v30 > v6 )
                v31 = 261;
              v49 = v31;
              if ( RequiredLength )
                *RequiredLength = v30;
              return v49;
            }
            return -1073741821;
          }
          if ( (_DWORD)v6 != 8 )
            return -1073741820;
          v33 = (unsigned int *)sub_140797594(v12, 1u, 0);
          if ( !v33 )
            return -1073741275;
          v34 = *v33;
          v52 = v34;
          sub_1407981E8(v33, 0);
          if ( TraceInformation )
            *(_QWORD *)TraceInformation = v34;
LABEL_67:
          if ( RequiredLength )
            *RequiredLength = 8;
          return v49;
        }
        if ( (unsigned int)v6 < 4 )
          return -1073741820;
        if ( !Buffer )
          return -1073741776;
        v35 = *((_QWORD *)Buffer + 1);
        v52 = v35;
        if ( !v35 || v35 == 0xFFFFFFFFLL )
          return -1073741816;
        if ( TraceInformation )
          *(_DWORD *)v9 = BYTE2(v35);
LABEL_109:
        if ( RequiredLength )
          *v10 = 4;
        return v49;
      }
      if ( (unsigned int)v6 < 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v36 = *((_QWORD *)Buffer + 1);
      v52 = v36;
      if ( !v36 || v36 == 0xFFFFFFFF )
        return -1073741816;
      v37 = HIDWORD(v36);
    }
    else
    {
      if ( (_DWORD)v6 != 4 )
        return -1073741820;
      if ( !Buffer )
        return -1073741776;
      v37 = *((_QWORD *)Buffer + 1);
      v52 = v37;
      if ( !v37 || v37 == 0xFFFFFFFF )
        return -1073741816;
      LODWORD(v37) = (unsigned __int16)v37;
      if ( (unsigned int)(unsigned __int16)v37 >= *(_DWORD *)(v12 + 16) )
        return -1073741816;
    }
    if ( TraceInformation )
      *(_DWORD *)v9 = v37;
    goto LABEL_109;
  }
  v54 = KeGetCurrentThread();
  if ( *((_BYTE *)v54 + 562) )
  {
    v40 = *(unsigned __int16 *)Buffer;
    if ( (_WORD)v40 )
    {
      v41 = *((_QWORD *)Buffer + 1);
      if ( (v41 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v41 + v40 > 0x7FFFFFFF0000LL || v41 + v40 < v41 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (_DWORD)v6 != 8 )
    return -1073741820;
  v52 = 0LL;
  result = sub_1406E6D40((__int64)Buffer, &v52);
  v49 = result;
  if ( result >= 0 )
  {
    if ( TraceInformation )
      *(_QWORD *)TraceInformation = v52;
    goto LABEL_67;
  }
  return result;
}
