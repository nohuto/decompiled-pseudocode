/*
 * XREFs of sub_140950084 @ 0x140950084
 * Callers:
 *     sub_140747DDC @ 0x140747DDC (sub_140747DDC.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_14074D6EC @ 0x14074D6EC (sub_14074D6EC.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 *     sub_1409502B0 @ 0x1409502B0 (sub_1409502B0.c)
 * Callees:
 *     PsGetCurrentThreadId @ 0x140231BE0 (PsGetCurrentThreadId.c)
 *     sub_1405622A4 @ 0x1405622A4 (sub_1405622A4.c)
 *     sub_14056274C @ 0x14056274C (sub_14056274C.c)
 *     sub_140562834 @ 0x140562834 (sub_140562834.c)
 *     sub_140957CB8 @ 0x140957CB8 (sub_140957CB8.c)
 */

int __fastcall sub_140950084(__int64 a1, char a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  HANDLE CurrentThreadId; // rax
  _QWORD *v10; // rbx
  HANDLE v11; // rsi
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  unsigned int v16; // r10d
  __int64 *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h] BYREF

  v23[0] = 0x20000LL;
  v24 = 0LL;
  v25 = 0LL;
  v23[1] = &word_140867F00;
  v22 = 0LL;
  v4 = (unsigned int)sub_140562834((_QWORD *)a1);
  sub_14056274C(v5, &v24, &v22, 0LL, &v25);
  v8 = (_QWORD *)(v24 + 40);
  if ( !v24 )
    v8 = v23;
  LODWORD(CurrentThreadId) = v25;
  if ( v25 )
  {
    v10 = (_QWORD *)(*(_QWORD *)(v25 + 48) + 24LL);
  }
  else if ( v24 )
  {
    v10 = (_QWORD *)(v24 + 56);
  }
  else
  {
    v10 = v23;
  }
  if ( v22 )
  {
    v11 = *(HANDLE *)(v22 + 1232);
  }
  else
  {
    CurrentThreadId = PsGetCurrentThreadId();
    v11 = CurrentThreadId;
  }
  v12 = *(_DWORD *)(a1 + 16);
  if ( !a2 )
  {
    LODWORD(CurrentThreadId) = sub_140957CB8(v12, (unsigned int)v4, v8, v10);
    v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 1);
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      if ( (byte_140C0DD4B & 0x40) == 0 )
        return (int)CurrentThreadId;
      v20 = qword_14003B620;
    }
    else
    {
      v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 2);
      if ( *(_DWORD *)(a1 + 16) == 2 )
      {
        if ( (byte_140C0DD4B & 0x40) == 0 )
          return (int)CurrentThreadId;
        v20 = qword_14003B6F0;
      }
      else
      {
        v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 3);
        if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          if ( (byte_140C0DD4B & 0x40) == 0 )
            return (int)CurrentThreadId;
          v20 = qword_14003B0D0;
        }
        else
        {
          v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 4);
          if ( *(_DWORD *)(a1 + 16) == 4 )
          {
            if ( (byte_140C0DD4B & 0x40) == 0 )
              return (int)CurrentThreadId;
            v20 = qword_14003B420;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 16) != 5 )
              goto LABEL_34;
            if ( (byte_140C0DD4B & 0x40) == 0 )
              return (int)CurrentThreadId;
            v20 = qword_14003B590;
          }
        }
      }
    }
    LODWORD(CurrentThreadId) = sub_1405622A4(v19, (const EVENT_DESCRIPTOR *)v20, v18, v11, v8[1], v10[1], v4);
    return (int)CurrentThreadId;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (byte_140C0DD4B & 0x20) != 0 )
    {
      v17 = qword_14003B5C0;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (byte_140C0DD4B & 0x20) != 0 )
    {
      v17 = qword_14003B330;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (byte_140C0DD4B & 0x20) != 0 )
    {
      v17 = qword_14003B250;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      if ( (byte_140C0DD4B & 0x20) != 0 )
      {
        v17 = qword_14003B770;
LABEL_27:
        LODWORD(CurrentThreadId) = sub_1405622A4(v6, (const EVENT_DESCRIPTOR *)v17, v7, v11, v8[1], v10[1], v4);
        goto LABEL_28;
      }
      goto LABEL_28;
    }
LABEL_34:
    __fastfail(5u);
  }
  if ( (byte_140C0DD4B & 0x20) != 0 )
  {
    v17 = qword_14003B3E0;
    goto LABEL_27;
  }
LABEL_28:
  *(_BYTE *)(a1 + 32) = 1;
  return (int)CurrentThreadId;
}
