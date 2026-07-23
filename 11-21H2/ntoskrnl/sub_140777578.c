/*
 * XREFs of sub_140777578 @ 0x140777578
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_140564C24 @ 0x140564C24 (sub_140564C24.c)
 *     sub_1406617B0 @ 0x1406617B0 (sub_1406617B0.c)
 *     sub_140764BE0 @ 0x140764BE0 (sub_140764BE0.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140863BE8 @ 0x140863BE8 (sub_140863BE8.c)
 *     sub_140947934 @ 0x140947934 (sub_140947934.c)
 * Callees:
 *     sub_14025A690 @ 0x14025A690 (sub_14025A690.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D2238 @ 0x1402D2238 (sub_1402D2238.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     sub_1406E60B0 @ 0x1406E60B0 (sub_1406E60B0.c)
 *     sub_1406EA5EC @ 0x1406EA5EC (sub_1406EA5EC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407456F8 @ 0x1407456F8 (sub_1407456F8.c)
 *     sub_1407491FC @ 0x1407491FC (sub_1407491FC.c)
 *     sub_140749294 @ 0x140749294 (sub_140749294.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140777B74 @ 0x140777B74 (sub_140777B74.c)
 *     sub_140777C08 @ 0x140777C08 (sub_140777C08.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14095B2D4 @ 0x14095B2D4 (sub_14095B2D4.c)
 *     sub_14095B398 @ 0x14095B398 (sub_14095B398.c)
 */

__int64 __fastcall sub_140777578(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, unsigned __int8 a6, char a7)
{
  char v7; // r14
  int v8; // ebx
  int v9; // edi
  int v10; // r12d
  char *v11; // rsi
  PVOID *v12; // r13
  __int64 v13; // r9
  char v14; // dl
  unsigned __int8 v15; // r15
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  int v18; // edi
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edx
  __int64 v23; // r9
  int v24; // ecx
  int v25; // edi
  ULONG_PTR v26; // rax
  char v27; // al
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  int v32; // eax
  unsigned int v33; // edx
  int v34; // eax
  bool v35; // al
  int v36; // ebx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rax
  char v40; // [rsp+40h] [rbp-28h]
  char v41; // [rsp+41h] [rbp-27h]
  unsigned int v42; // [rsp+44h] [rbp-24h]
  unsigned int v43; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v45; // [rsp+B0h] [rbp+48h] BYREF
  char v46; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v47; // [rsp+C0h] [rbp+58h]
  int v48; // [rsp+C8h] [rbp+60h]

  v48 = a4;
  v47 = a3;
  v7 = a7;
  v46 = 0;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = (char *)a1;
  v12 = (PVOID *)a1;
  v13 = 1LL;
  DestinationString = 0LL;
  if ( a2 )
  {
    if ( v8 != 1 && !*(_BYTE *)(a2 + 28) && !a7 )
    {
      v35 = sub_14025A690(a2);
      a1 = (__int64)qword_140C46278;
      v13 = 1LL;
      if ( v35 )
        v11 = (char *)qword_140C46278;
    }
  }
  LOBYTE(a1) = 0;
  v14 = 1;
  v43 = 0;
  v42 = a1;
  v15 = 0;
  v41 = 0;
  a7 = 1;
  while ( 2 )
  {
    if ( !v7 )
    {
      if ( (byte_140C0DD4B & 8) != 0 )
        sub_140561048(a1, (const EVENT_DESCRIPTOR *)qword_14003B0F0, a3, *((const wchar_t **)v11 + 6));
      v45 = 0;
      v41 = sub_140749294((__int64)v11, a5, (__int64)&v45);
      if ( (byte_140C0DD4B & 8) != 0 )
        sub_140561048(v16, (const EVENT_DESCRIPTOR *)qword_14003B280, a3, *((const wchar_t **)v11 + 6));
      if ( v45 )
      {
        v38 = sub_140777578((_DWORD)qword_140C46278, v10, v9, v8, 0, 0, 1);
        LODWORD(a1) = (unsigned __int8)v42;
        v13 = 1LL;
        if ( v38 == -1073741106 )
          LODWORD(a1) = 1;
        v42 = a1;
      }
      else
      {
        LOBYTE(a1) = v42;
        v13 = 1LL;
      }
      v14 = a7;
    }
    v40 = 0;
    v17 = (ULONG_PTR)v11;
    v45 = 1;
    do
    {
      v18 = 1;
      if ( !(_BYTE)a1 )
      {
        if ( v14 )
        {
          v19 = *(_DWORD *)(v17 + 704);
          if ( (v19 & 0x10000) != 0 )
            *(_DWORD *)(v17 + 704) = v19 & 0xFFFEFFFF;
        }
        if ( (unsigned int)(*(_DWORD *)(v17 + 300) - 769) > 1 && (*(_DWORD *)(v17 + 396) & 0x6000) == 0 )
        {
          if ( (unsigned __int8)sub_140777C08(v17, 2LL) )
            sub_140765114(v17, 51, 0);
          v13 = 1LL;
        }
        v20 = *(unsigned int *)(v17 + 396);
        if ( (v20 & 0x6000) == 0 )
        {
          if ( *(_DWORD *)(v17 + 300) == 769 )
          {
            if ( v48 == 3 && (v20 & 0x2000000) != 0 || v7 )
              goto LABEL_41;
            if ( (unsigned __int8)sub_140777C08(v17, 1LL) )
            {
              sub_140765114(v17, 51, 0);
              goto LABEL_41;
            }
            v31 = sub_1406E60B0(v17, a6);
            v22 = v31;
            if ( v31 != 259 )
            {
              if ( v31 >= 0 )
                goto LABEL_94;
              goto LABEL_40;
            }
LABEL_98:
            v15 = 1;
            goto LABEL_41;
          }
          if ( *(_DWORD *)(v17 + 300) == 772 )
          {
            if ( v7 || (*(_DWORD *)(v17 + 704) & 0x10000) != 0 )
              goto LABEL_41;
            v22 = sub_1407743C8(v17, v47);
            if ( v22 >= 0 )
            {
              sub_1402D2238(v17, 0);
              v18 = 0;
              v41 = 1;
              goto LABEL_41;
            }
            if ( *(_DWORD *)(v17 + 300) == 772 )
              *(_DWORD *)(v17 + 704) |= 0x10000u;
            goto LABEL_40;
          }
          if ( *(_DWORD *)(v17 + 300) != 774 )
          {
            switch ( *(_DWORD *)(v17 + 300) )
            {
              case 0x308:
                v32 = sub_140768EA8(v17, v20, a3);
                break;
              case 0x309:
                if ( (int)v20 < 0 )
                {
                  v18 = 1;
                  goto LABEL_41;
                }
                v32 = sub_14076BE08(v17, v48 != 1, a3);
                break;
              case 0x30A:
                if ( v48 == 1 && (char *)v17 != v11 )
                  goto LABEL_41;
                v18 = 2;
                if ( v7 || (v20 & 8) == 0 )
                  goto LABEL_41;
                v21 = sub_14074B420(v17, a6, v15);
                v22 = v21;
                if ( v21 == 259 )
                {
                  v15 = 1;
                  v18 = 1;
                  goto LABEL_41;
                }
                if ( v21 < 0 )
                  goto LABEL_40;
                goto LABEL_34;
              case 0x30C:
                v34 = sub_14095B2D4(v17, a6, v15, 1LL);
                goto LABEL_97;
              case 0x30D:
                v32 = sub_14095B398(v17, v20, a3, 1LL);
                break;
              case 0x30F:
                if ( (*(_DWORD *)(v17 + 704) & 0x200) != 0 )
                {
                  sub_1402D25CC(*(_QWORD *)(v17 + 32));
                  *(_DWORD *)(v17 + 704) &= ~0x200u;
                }
                v22 = sub_14076F8AC(v17);
                v18 = 2;
                goto LABEL_40;
              default:
                goto LABEL_41;
            }
            if ( v32 >= 0 )
            {
LABEL_94:
              v18 = 0;
              goto LABEL_41;
            }
            v22 = -1073741106;
LABEL_40:
            if ( v22 == -1073741106 )
            {
LABEL_108:
              if ( !v7 )
                goto LABEL_109;
              v43 = v22;
LABEL_47:
              if ( v15 && v18 && dword_140C0974C >= 0 || (v25 = v18 - 1) == 0 )
              {
                while ( 1 )
                {
LABEL_49:
                  if ( (char *)v17 == v11 )
                  {
                    v40 = 1;
                    v14 = 0;
                    v45 &= -(v15 != 0);
                    a7 = 0;
                    v27 = v45;
                    goto LABEL_53;
                  }
                  v26 = *(_QWORD *)v17;
                  if ( *(_QWORD *)v17 )
                    goto LABEL_51;
                  if ( v15 && dword_140C0974C > 0 )
                    break;
                  if ( *(_QWORD *)(v17 + 16) )
                    v17 = *(_QWORD *)(v17 + 16);
                }
                v39 = *(_QWORD *)(v17 + 16);
                if ( v39 )
                  v17 = *(_QWORD *)(v39 + 8);
                v40 = 1;
              }
              else if ( v25 == 1 )
              {
                v26 = *(_QWORD *)(v17 + 8);
                if ( !v26 )
                  goto LABEL_49;
LABEL_51:
                v17 = v26;
              }
              goto LABEL_52;
            }
LABEL_41:
            v46 = 0;
            v22 = sub_140777B74(0LL, 0LL, &v46, v13);
            if ( v22 != -1073741106 )
            {
              if ( !v40 )
                goto LABEL_45;
              if ( v46 )
                goto LABEL_45;
              v22 = sub_140777B74(0LL, 1LL, &v46, v23);
              v40 = 0;
              v15 &= -(v46 != 0);
              if ( v22 != -1073741106 )
                goto LABEL_45;
            }
            goto LABEL_108;
          }
          if ( v7 )
            goto LABEL_41;
          sub_1402D2848(*(_QWORD *)(v17 + 32));
          v33 = a6;
          *(_DWORD *)(v17 + 704) |= 0x200u;
          v34 = sub_1407491FC(v17, v33, v15);
LABEL_97:
          v22 = v34;
          if ( v34 != 259 )
          {
LABEL_34:
            v18 = 0;
            goto LABEL_40;
          }
          goto LABEL_98;
        }
LABEL_45:
        if ( v7 )
          goto LABEL_47;
        v24 = *(_DWORD *)(v17 + 704);
        if ( (v24 & 1) == 0 )
          goto LABEL_47;
        v29 = *(_DWORD *)(v17 + 300);
        if ( v29 < 771 )
          goto LABEL_112;
        if ( v29 <= 777 )
        {
          v30 = (*(_DWORD *)(v17 + 396) & 0x6000) == 0;
          goto LABEL_82;
        }
        if ( v29 != 778 )
        {
LABEL_112:
          if ( (*(_DWORD *)(v17 + 396) & 0x2000) != 0 )
          {
            v30 = *(_DWORD *)(v17 + 404) == 56;
LABEL_82:
            if ( v30 )
              goto LABEL_47;
          }
        }
        *(_DWORD *)(v17 + 704) = v24 & 0xFFFFFFFE;
        sub_1407456F8(v17);
        goto LABEL_47;
      }
LABEL_109:
      LOBYTE(v42) = 0;
      sub_140777B74(1LL, 1LL, &v46, 1LL);
      v15 = 0;
      sub_140777578((_DWORD)qword_140C46278, v10, v47, v48, a5, a6, 1);
      v36 = sub_140769784((__int64)&DestinationString, *((_WORD *)v11 + 20));
      if ( v36 < 0 )
      {
        ObfDereferenceObject(v12[4]);
        return (unsigned int)v36;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 40));
      ObfDereferenceObject(v12[4]);
      sub_140775698(1);
      sub_1406EA5EC();
      sub_14077572C(1);
      v37 = sub_140779C10(&DestinationString, 1953261124LL);
      RtlFreeUnicodeString(&DestinationString);
      if ( !v37 )
        return 3221225473LL;
      v11 = *(char **)(*(_QWORD *)(v37 + 312) + 40LL);
      v17 = (ULONG_PTR)v11;
      v12 = (PVOID *)v11;
LABEL_52:
      v27 = v45;
      v14 = a7;
LABEL_53:
      a1 = v42;
      v13 = 1LL;
    }
    while ( v27 );
    v8 = v48;
    v9 = v47;
    if ( v41 )
      continue;
    break;
  }
  if ( !v7 )
    ObfDereferenceObject(v12[4]);
  return v43;
}
