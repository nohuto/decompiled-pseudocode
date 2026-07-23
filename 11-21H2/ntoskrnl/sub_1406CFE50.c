/*
 * XREFs of sub_1406CFE50 @ 0x1406CFE50
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     sub_1405636A4 @ 0x1405636A4 (sub_1405636A4.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_1406D01BC @ 0x1406D01BC (sub_1406D01BC.c)
 *     sub_1406D02C0 @ 0x1406D02C0 (sub_1406D02C0.c)
 *     sub_1406D035C @ 0x1406D035C (sub_1406D035C.c)
 *     sub_1406E5DD4 @ 0x1406E5DD4 (sub_1406E5DD4.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406CFE50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _WORD *Pool2; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r14d
  const wchar_t *v12; // rcx
  int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // r10d
  int v16; // r10d
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // sf
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  char (__fastcall *v21)(int, int, int, __int64); // r9
  int v22; // edx
  int v23; // eax
  int v25; // [rsp+58h] [rbp-19h] BYREF
  int v26; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v27; // [rsp+60h] [rbp-11h] BYREF
  __int64 v28; // [rsp+70h] [rbp-1h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+7h] BYREF

  v25 = 0;
  v28 = 0LL;
  v26 = 0;
  Pool2 = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  *a6 = 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  v27 = 0LL;
  v9 = sub_1406D035C(a1, a2, a5, &v27);
  if ( v9 < 0 )
    goto LABEL_55;
  v11 = DWORD1(v27);
  if ( (byte_140C0DD4B & 2) != 0 )
  {
    if ( WORD2(v27) )
    {
      switch ( WORD2(v27) )
      {
        case 1u:
          v12 = L"Enum";
          break;
        case 2u:
          v12 = L"Service";
          break;
        case 4u:
          v12 = L"EjectRelations";
          break;
        case 8u:
          v12 = L"RemovalRelations";
          break;
        case 0x10u:
          v12 = L"PowerRelations";
          break;
        case 0x20u:
          v12 = L"BusRelations";
          break;
        case 0x40u:
          v12 = L"TransportRelations";
          break;
        case 0x80u:
          v12 = L"Class";
          break;
        default:
          v12 = L"Unknown";
          break;
      }
    }
    else
    {
      v12 = L"None";
    }
    sub_1405637DC(
      (__int64)v12,
      (const EVENT_DESCRIPTOR *)qword_140014F80,
      v10,
      *((const wchar_t **)&v27 + 1),
      v12,
      BYTE6(v27) & 1);
  }
  if ( !a3 || a4 < 0x14 )
  {
    v13 = -1073741811;
    goto LABEL_52;
  }
  if ( (v11 & 0x20000) == 0 || (unsigned __int8)sub_14078A600(2LL) )
  {
    v14 = 0;
    if ( a4 - 20 >= 2 )
      v14 = a4 - 20;
    if ( v14 )
    {
      Pool2 = (_WORD *)ExAllocatePool2(256LL, v14, 879783504LL);
      if ( !Pool2 )
      {
        v13 = -1073741670;
        goto LABEL_52;
      }
      v15 = v14 >> 1;
    }
    else
    {
      v15 = 0;
    }
    v25 = v15;
    v13 = sub_1406D02C0(v11, &v26);
    if ( v13 >= 0 )
    {
      v17 = (unsigned int)(unsigned __int16)v11 - 4;
      if ( (unsigned int)v17 <= 0x3C && (v18 = 0x1000000010001011LL, _bittest64(&v18, v17)) )
      {
        if ( !*((_QWORD *)&v27 + 1) )
        {
          v13 = -1073741811;
          goto LABEL_52;
        }
        v13 = sub_1406E5DD4(qword_140D00AC0, DWORD2(v27), v26 & 0xFFFFFEFF, (_DWORD)Pool2, v16, (__int64)&v25);
        v19 = v13 < 0;
      }
      else
      {
        SeCaptureSubjectContext(&SubjectContext);
        p_SubjectContext = &SubjectContext;
        LODWORD(v21) = 0;
        if ( (v11 & 0x20000) != 0 )
          p_SubjectContext = 0LL;
        else
          v21 = sub_1406CF4C0;
        v13 = sub_1406D01BC(
                qword_140D00AC0,
                DWORD2(v27),
                v26,
                (_DWORD)v21,
                (__int64)p_SubjectContext,
                (__int64)Pool2,
                v25,
                (__int64)&v25);
        SeReleaseSubjectContext(&SubjectContext);
        v19 = v13 < 0;
      }
      if ( !v19 )
      {
        v22 = v25;
        if ( !v25 )
        {
          v25 = 1;
          if ( v14 < 2 )
          {
            v13 = -1073741789;
            goto LABEL_52;
          }
          *Pool2 = 0;
          v22 = v25;
        }
        v23 = sub_14077C780((unsigned int)v13, (unsigned int)(2 * v22), 0LL, Pool2, 2 * v22, HIDWORD(v28), a3, a4, a6);
        goto LABEL_53;
      }
    }
  }
  else
  {
    v13 = -1073741790;
  }
LABEL_52:
  v23 = sub_14077C780((unsigned int)v13, (unsigned int)(2 * v25), 0LL, 0LL, 0, HIDWORD(v28), a3, a4, a6);
LABEL_53:
  v9 = v23;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_55:
  if ( *((_QWORD *)&v27 + 1) )
    sub_1402DF554(*((_BYTE *)KeGetCurrentThread() + 562), *((void **)&v27 + 1));
  if ( (byte_140C0DD4B & 2) != 0 )
    sub_1405636A4(v8, (const EVENT_DESCRIPTOR *)qword_140014F90, v10, v9);
  return (unsigned int)v9;
}
