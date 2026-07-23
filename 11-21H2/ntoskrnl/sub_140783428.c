/*
 * XREFs of sub_140783428 @ 0x140783428
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 *     IoWMIOpenBlock @ 0x140784550 (IoWMIOpenBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14075DFE4 @ 0x14075DFE4 (sub_14075DFE4.c)
 *     sub_14078314C @ 0x14078314C (sub_14078314C.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 *     sub_1407841FC @ 0x1407841FC (sub_1407841FC.c)
 *     sub_1407843EC @ 0x1407843EC (sub_1407843EC.c)
 */

__int64 __fastcall sub_140783428(int a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rax
  char v6; // bp
  __int64 v8; // rcx
  int v9; // edi
  char *v10; // rbx
  ULONG_PTR v11; // rdi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v15; // rax
  ULONG_PTR *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  PVOID Object[5]; // [rsp+30h] [rbp-28h] BYREF

  Object[0] = 0LL;
  v5 = (unsigned int)(a1 - 2244872);
  v6 = a2;
  if ( (unsigned int)v5 > 0x38 )
    return (unsigned int)-1073741649;
  v8 = 0x110000000000001LL;
  if ( !_bittest64(&v8, v5) )
    return (unsigned int)-1073741649;
  v9 = sub_14078314C(a3, a2, a4, Object);
  if ( v9 >= 0 )
  {
    v10 = (char *)Object[0];
    *((_DWORD *)Object[0] + 16) = a1;
    if ( a1 == 2244872 )
    {
      *((_DWORD *)v10 + 41) |= 1u;
    }
    else
    {
      v11 = sub_140783CD8(v10 + 24, 0LL);
      KeWaitForSingleObject(&::Object, Executive, 0, 0, 0LL);
      if ( v11 )
      {
        v12 = *(_QWORD **)(v11 + 48);
        v13 = v10 + 40;
        if ( *v12 != v11 + 40 )
          goto LABEL_28;
        *v13 = v11 + 40;
        *((_QWORD *)v10 + 6) = v12;
        *v12 = v13;
        *(_QWORD *)(v11 + 48) = v13;
      }
      *((_QWORD *)v10 + 7) = v11;
      KeReleaseMutex(&::Object, 0);
      if ( a1 == 2244924 )
      {
        if ( !v11 || *(_DWORD *)(v11 + 36) == a1 - 2244924 || !(unsigned __int8)sub_1407843EC(v11) )
        {
          v9 = -1073741163;
          goto LABEL_17;
        }
LABEL_12:
        if ( !v6 )
          *((_DWORD *)v10 + 41) |= 2u;
        if ( v11 )
        {
LABEL_15:
          v9 = sub_1407841FC(v11);
          if ( v9 < 0 )
            goto LABEL_17;
          goto LABEL_16;
        }
        KeWaitForSingleObject(&::Object, Executive, 0, 0, 0LL);
        v15 = sub_14075DFE4();
        v11 = (ULONG_PTR)v15;
        if ( v15 )
        {
          *(_OWORD *)(v15 + 9) = *(_OWORD *)(v10 + 24);
          v16 = (ULONG_PTR *)qword_140C16560;
          v17 = *(_QWORD *)qword_140C16560;
          if ( *(_QWORD *)(*(_QWORD *)qword_140C16560 + 8LL) == qword_140C16560 )
          {
            *(_QWORD *)v11 = v17;
            *(_QWORD *)(v11 + 8) = v16;
            *(_QWORD *)(v17 + 8) = v11;
            *v16 = v11;
            v18 = v10 + 40;
            v19 = *(_QWORD **)(v11 + 48);
            if ( *v19 == v11 + 40 )
            {
              *v18 = v11 + 40;
              *((_QWORD *)v10 + 6) = v19;
              *v19 = v18;
              *(_QWORD *)(v11 + 48) = v18;
              *((_QWORD *)v10 + 7) = v11;
              KeReleaseMutex(&::Object, 0);
              goto LABEL_15;
            }
          }
LABEL_28:
          __fastfail(3u);
        }
        KeReleaseMutex(&::Object, 0);
        v9 = -1073741670;
LABEL_17:
        if ( v10 )
          ObfDereferenceObject(v10);
        return (unsigned int)v9;
      }
      if ( a1 == 2244928 )
        goto LABEL_12;
    }
LABEL_16:
    *a5 = v10;
    v10 = 0LL;
    v9 = 0;
    goto LABEL_17;
  }
  return (unsigned int)v9;
}
