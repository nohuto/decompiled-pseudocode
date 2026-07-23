/*
 * XREFs of sub_1407806B0 @ 0x1407806B0
 * Callers:
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     sub_140693188 @ 0x140693188 (sub_140693188.c)
 *     sub_1406C29BC @ 0x1406C29BC (sub_1406C29BC.c)
 *     sub_1406CC8F8 @ 0x1406CC8F8 (sub_1406CC8F8.c)
 *     sub_1406D17F4 @ 0x1406D17F4 (sub_1406D17F4.c)
 *     sub_14077E5C0 @ 0x14077E5C0 (sub_14077E5C0.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     sub_14078121C @ 0x14078121C (sub_14078121C.c)
 *     sub_140782774 @ 0x140782774 (sub_140782774.c)
 *     sub_1407827B8 @ 0x1407827B8 (sub_1407827B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407806B0(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  UNICODE_STRING *v6; // rsi
  __int64 v7; // r14
  UNICODE_STRING *v8; // r13
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r15
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  UNICODE_STRING *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // r11
  _QWORD *v24; // rax
  const UNICODE_STRING *v25; // r14
  UNICODE_STRING *v26; // rax
  __int64 v27; // r12
  int Buffer; // eax
  UNICODE_STRING *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  void *v33; // rcx
  __int64 v34; // rsi
  int v35; // eax
  __int64 *v36; // rax
  void *v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v43; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45[2]; // [rsp+50h] [rbp-39h] BYREF
  int *v46; // [rsp+70h] [rbp-19h]
  int v47; // [rsp+78h] [rbp-11h]
  int v48; // [rsp+7Ch] [rbp-Dh]
  __int64 v49; // [rsp+80h] [rbp-9h]
  int v50; // [rsp+88h] [rbp-1h] BYREF
  int v51; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  int v53; // [rsp+98h] [rbp+Fh]
  int v54; // [rsp+9Ch] [rbp+13h]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  v7 = a1[1];
  v8 = 0LL;
  OldContext = 0LL;
  v43 = v5;
  v9 = *(_DWORD *)(v5 + 8);
  v10 = *(_QWORD *)(v5 + 32);
  v11 = *(_QWORD *)(v5 + 16);
  if ( v9 < 0 )
    goto LABEL_2;
  sub_140782774(*(_QWORD *)(v7 + 16), v4, &OldContext);
  if ( v9 == 260 )
  {
    if ( !OldContext )
    {
LABEL_2:
      v12 = 0;
      goto LABEL_37;
    }
    v17 = (char *)OldContext - 48;
    v18 = *((_QWORD *)OldContext - 6);
    if ( *(_QWORD **)(*v17 + 8LL) == v17 )
    {
      v19 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v19 == v17 )
      {
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        v17[1] = 0LL;
        sub_1406D17F4(v17);
        goto LABEL_2;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( v9 == 872 )
  {
    if ( OldContext )
      goto LABEL_2;
    if ( !v10 )
      return 0;
    v20 = (UNICODE_STRING *)sub_1406CC8F8(v14, v13, v15, v16);
    v8 = v20;
    if ( v20 )
    {
      v12 = sub_14077FB68(0LL, (PCUNICODE_STRING)(v10 + 48), v20 + 1);
      if ( v12 >= 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v10 + 8), 0x67655256u);
        *(_QWORD *)&v8->Length = *(_QWORD *)(v10 + 8);
        LODWORD(v8->Buffer) = *(_DWORD *)(v10 + 64);
        v21 = sub_1407827B8(*(_QWORD *)(v7 + 16), &v8[-2], &OldContext);
        v12 = v21;
        if ( v21 < 0 )
        {
          if ( v21 == -1073741772 )
          {
            v24 = *(_QWORD **)(v22 + 8);
            if ( *v24 == v22 )
            {
              *v23 = v22;
              v12 = 0;
              v23[1] = v24;
              *v24 = v23;
              *(_QWORD *)(v22 + 8) = v23;
LABEL_38:
              v33 = *(void **)(v11 + 8);
              if ( v33 )
                ObfDereferenceObject(v33);
              v34 = v43;
              *(_QWORD *)(v11 + 8) = *(_QWORD *)v10;
              *(_QWORD *)v10 = 0LL;
              v35 = *(_DWORD *)(v34 + 8);
              if ( v35 == 260 || v35 == 872 )
              {
                if ( (unsigned int)dword_140C038A0 > 5 )
                {
                  v38 = &qword_140001AF8;
                  if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
                    v38 = *(__int64 **)v11;
                  v39 = v38[1];
                  v40 = *(unsigned __int16 *)v38;
                  v48 = 0;
                  v51 = 0;
                  v54 = 0;
                  v49 = v39;
                  p_OldContext = &OldContext;
                  v46 = &v50;
                  v50 = v40;
                  v47 = 2;
                  LODWORD(OldContext) = v12;
                  v53 = 4;
                  sub_14020A9C4(
                    (__int64)&dword_140C038A0,
                    (unsigned __int8 *)&word_14002A746,
                    &ActivityId,
                    0LL,
                    5u,
                    v45);
                }
              }
              else
              {
                v36 = *(__int64 **)v11;
                v37 = *(void **)(*(_QWORD *)v11 + 8LL);
                if ( v37 )
                {
                  ExFreePoolWithTag(v37, 0);
                  v36 = *(__int64 **)v11;
                }
                *(_OWORD *)v36 = *(_OWORD *)(v10 + 16);
                *(_OWORD *)*(_QWORD *)(v11 + 112) = *(_OWORD *)(v10 + 32);
                *(_QWORD *)(v10 + 24) = 0LL;
                *(_QWORD *)(v10 + 40) = 0LL;
              }
              sub_14078121C((PVOID)v10);
              goto LABEL_51;
            }
            goto LABEL_19;
          }
        }
        else
        {
          v12 = -1073741771;
        }
      }
      goto LABEL_29;
    }
    goto LABEL_13;
  }
  v25 = (const UNICODE_STRING *)OldContext;
  if ( OldContext )
  {
    v26 = (UNICODE_STRING *)sub_140693188(*(PVOID *)OldContext);
    v6 = v26;
    if ( v26 )
    {
      v27 = (__int64)&v26[1];
      v12 = sub_14077FB68(0LL, v25 + 1, v26 + 1);
      if ( v12 < 0 )
        goto LABEL_29;
      Buffer = (int)v25->Buffer;
LABEL_28:
      *(_DWORD *)(&v6[2].MaximumLength + 1) = Buffer;
      v6[2].Length = sub_14077E5C0(v27);
      v12 = CmSetCallbackObjectContext(**(PVOID **)(v11 + 72), &Cookie, v6, &OldContext);
      if ( v12 >= 0 )
        goto LABEL_37;
      goto LABEL_29;
    }
  }
  else
  {
    v29 = (UNICODE_STRING *)sub_140693188(a2);
    v6 = v29;
    if ( v29 )
    {
      v27 = (__int64)&v29[1];
      v12 = sub_14077FB68(0LL, (PCUNICODE_STRING)(v10 + 48), v29 + 1);
      if ( v12 < 0 )
        goto LABEL_29;
      Buffer = *(_DWORD *)(v10 + 64);
      goto LABEL_28;
    }
  }
LABEL_13:
  v12 = -1073741670;
LABEL_29:
  if ( (unsigned int)dword_140C038A0 > 2 )
  {
    v30 = &qword_140001AF8;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
      v30 = *(__int64 **)v11;
    v31 = v30[1];
    v32 = *(unsigned __int16 *)v30;
    v48 = 0;
    v51 = 0;
    v54 = 0;
    v49 = v31;
    p_OldContext = &OldContext;
    v46 = &v50;
    v50 = v32;
    v47 = 2;
    LODWORD(OldContext) = v12;
    v53 = 4;
    sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)&dword_14002A93C, &ActivityId, 0LL, 5u, v45);
  }
  if ( v6 )
    sub_1406C29BC((PVOID *)v6);
  if ( v8 )
    sub_1406D17F4(&v8[-3].Length);
LABEL_37:
  if ( v10 )
    goto LABEL_38;
  v34 = v43;
LABEL_51:
  if ( v12 < 0 )
  {
    *(_DWORD *)(v34 + 24) = v12;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v12;
}
