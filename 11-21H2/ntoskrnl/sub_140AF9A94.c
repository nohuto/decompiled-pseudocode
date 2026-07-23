/*
 * XREFs of sub_140AF9A94 @ 0x140AF9A94
 * Callers:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 * Callees:
 *     sub_140213BD4 @ 0x140213BD4 (sub_140213BD4.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1403BEF40 @ 0x1403BEF40 (sub_1403BEF40.c)
 *     sub_1403BEFA8 @ 0x1403BEFA8 (sub_1403BEFA8.c)
 *     sub_1403BF088 @ 0x1403BF088 (sub_1403BF088.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF9858 @ 0x140AF9858 (sub_140AF9858.c)
 *     sub_140B4BD48 @ 0x140B4BD48 (sub_140B4BD48.c)
 *     sub_140B4BDE8 @ 0x140B4BDE8 (sub_140B4BDE8.c)
 */

__int64 __fastcall sub_140AF9A94(__int64 a1)
{
  unsigned int v1; // esi
  char v2; // bp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned int *v11; // rax
  unsigned __int64 v12; // rdi
  char *v13; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  void *v17; // rax
  void *v18; // r12
  __int64 *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0LL;
  v1 = 0;
  v2 = 0;
  if ( qword_140CE2210 )
    return v1;
  Mutex.Owner = 0LL;
  Mutex.Contention = 0;
  Mutex.Event.Header.SignalState = 0;
  Mutex.Event.Header.WaitListHead.Blink = &Mutex.Event.Header.WaitListHead;
  Mutex.Event.Header.WaitListHead.Flink = &Mutex.Event.Header.WaitListHead;
  qword_140CE2218 = (__int64)&qword_140CE2210;
  qword_140CE2210 = (__int64)&qword_140CE2210;
  Mutex.Count = 1;
  LOWORD(Mutex.Event.Header.Lock) = 1;
  Mutex.Event.Header.Size = 6;
  v1 = sub_140AF9858(a1, (__int64 *)&v19);
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  v5 = *(_QWORD *)(a1 + 240);
  v6 = *(_QWORD *)(v5 + 120);
  if ( v6 )
  {
    v14 = *(_DWORD *)(v5 + 128);
    if ( v14 )
    {
      v15 = sub_140B4BDE8(*(_QWORD *)(v5 + 120), v14);
      v16 = v15;
      if ( v15 )
      {
        v17 = (void *)sub_1403BF088(a1, v15);
        v18 = v17;
        if ( v17 )
        {
          memset(v17, 0, v16);
          sub_140B4BD48(a1, v18, v16, v6, v14);
        }
      }
    }
  }
  if ( sub_140213BD4(1413763922, 0LL, 0LL) || sub_140213BD4(1413763928, 0LL, 0LL) )
    v2 = 1;
  v7 = *v19;
  if ( *v19 == -1 || (v8 = sub_1403BF3B8(*v19, ((*v19 & 0xFFFuLL) + 4131) >> 12, 1u, 0LL, 4u)) == 0 )
  {
    if ( v2 )
      return v1;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to map RSDT\n");
    return (unsigned int)-1073741670;
  }
  if ( *(_DWORD *)v8 != 1413763928 && *(_DWORD *)v8 != 1413763922 )
  {
    if ( !v2 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: The RSDT pointer is invalid.\n");
      KeBugCheckEx(0xA5u, 0x1000AuLL, 0LL, 0LL, 0LL);
    }
    return v1;
  }
  v9 = *(unsigned int *)(v8 + 4);
  sub_1403BF310(v8, ((v8 & 0xFFF) + 4131) >> 12, 0LL);
  v10 = (unsigned int)v9;
  v11 = (unsigned int *)sub_1403BF3B8(v7, (v9 + (unsigned __int64)(v7 & 0xFFF) + 4095) >> 12, 1u, 0LL, 4u);
  v12 = (unsigned __int64)v11;
  if ( !v11 )
  {
    if ( v2 )
      return v1;
    DbgPrint("**** HalpAcpiTableCacheInit: Unable to remap RSDT.\n");
    return (unsigned int)-1073741670;
  }
  v13 = sub_1403BEFA8(a1, v11, v7);
  if ( v13 )
  {
    sub_1403BF310(v12, (v10 + (v12 & 0xFFF) + 4095) >> 12, 0LL);
    sub_1403BEF40(a1, (__int64)v13);
  }
  else
  {
    if ( !v2 )
    {
      DbgPrint("**** HalpAcpiTableCacheInit: Unable to cache RSDT.\n");
      v1 = -1073741670;
    }
    sub_1403BF310(v12, (v10 + (v12 & 0xFFF) + 4095) >> 12, 0LL);
  }
  return v1;
}
