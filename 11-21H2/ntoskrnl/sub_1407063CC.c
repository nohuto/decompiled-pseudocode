/*
 * XREFs of sub_1407063CC @ 0x1407063CC
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     sub_1402792AC @ 0x1402792AC (sub_1402792AC.c)
 *     sub_14028D2D8 @ 0x14028D2D8 (sub_14028D2D8.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409701AC @ 0x1409701AC (sub_1409701AC.c)
 */

__int64 __fastcall sub_1407063CC(struct _FILE_OBJECT *a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  __int64 **i; // rdi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  char *v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r10
  size_t v20; // r8
  __int64 *v21; // rdx
  unsigned __int64 v22; // r9
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a3 + 24) & 0xFFF;
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(unsigned int *)(a3 + 40) + 4095LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v8 = (unsigned __int64)(v5 + v7) >> 12;
  v24 = v6 << 12;
  if ( a2 )
  {
    v11 = sub_1409701AC(a2);
  }
  else
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = sub_1402792AC(a1, a3, (__int64)&v24, (__int64)&Event, a4, 2, 0LL);
    if ( v11 == 259 )
    {
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      v11 = *(_DWORD *)a4;
    }
  }
  if ( v11 < 0 )
  {
    dword_140C4F3D0 = 32;
    if ( !sub_14028D2D8(v11, 0LL) && v11 != -1073741740 && v11 != -1073741209 )
      return (unsigned int)-1073741792;
  }
  else
  {
    v12 = *(_QWORD *)(a4 + 8);
    if ( v12 != v8 << 12 )
      memset((void *)(*(_QWORD *)(a3 + 24) + v12), 0, (v8 << 12) - v12);
    for ( i = *(__int64 ***)a3; i; i = (__int64 **)*i )
    {
      v15 = (unsigned __int64)i[2];
      v16 = (((_DWORD)i[3] & 0xFFF) + (unsigned __int64)*((unsigned int *)i + 10) + 4095) >> 12;
      if ( v6 < v16 + v15 && v8 + v6 > v15 )
      {
        v17 = *(char **)(a3 + 24);
        if ( v15 > v6 )
        {
          v22 = v15 - v6;
          v21 = i[3];
          if ( v8 - v22 <= v16 )
            v16 = v8 - v22;
          v17 += 4096 * v22;
          v20 = v16 << 12;
        }
        else
        {
          v18 = v8;
          v19 = v16 - (v6 - v15);
          if ( v19 <= v8 )
            v18 = v19;
          v20 = v18 << 12;
          v21 = &i[3][512 * (v6 - v15)];
        }
        memmove(v17, v21, v20);
      }
    }
  }
  return (unsigned int)v11;
}
