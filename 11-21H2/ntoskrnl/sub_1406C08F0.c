/*
 * XREFs of sub_1406C08F0 @ 0x1406C08F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     sub_1406C0D00 @ 0x1406C0D00 (sub_1406C0D00.c)
 *     sub_1406C1234 @ 0x1406C1234 (sub_1406C1234.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406C08F0(__int64 *a1, __int64 a2, int a3, void *a4)
{
  char v6; // si
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // ebx
  unsigned __int64 v10; // rbx
  PVOID *p_Object; // rcx
  int v12; // eax
  _QWORD *v13; // r14
  unsigned __int64 v14; // rbx
  size_t v15; // r8
  __int64 v16; // rcx
  int v17; // edi
  _DWORD *v18; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  v26 = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = sub_1406C0D00(a4);
  if ( (int)result >= 0 )
  {
    v9 = sub_1406C0B60(48LL);
    if ( v9 >= 0 )
    {
      v10 = (unsigned int)(MEMORY[0x18] + 392);
      if ( v10 < MEMORY[0x18] )
      {
        v9 = -1073741811;
      }
      else
      {
        p_Object = &Object;
        LOBYTE(p_Object) = v6;
        v12 = sub_14072B3B0((_DWORD)p_Object, (_DWORD)qword_140C24FB8, a3, v6);
        if ( v12 >= 0 )
        {
          v13 = Object;
          memset(Object, 0, (unsigned int)v10);
          v14 = ((unsigned __int64)v13 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v14 + 8) = v14;
          *(_QWORD *)v14 = v14;
          v15 = MEMORY[0x18];
          *(_QWORD *)(v14 + 24) = MEMORY[0x18];
          *(_QWORD *)(v14 + 16) = 0LL;
          *(_BYTE *)(v14 + 40) = MEMORY[0x28];
          memmove((void *)(v14 + 48), (const void *)0x30, v15);
          ExFreePoolWithTag(0LL, 0x534E624Fu);
          v13[37] = 0LL;
          *((_DWORD *)v13 + 85) = -1;
          *((_DWORD *)v13 + 84) = 1;
          if ( (*((_BYTE *)v13 - 22) & 2) != 0 )
            v16 = (__int64)v13 - byte_140C25440[*((_BYTE *)v13 - 22) & 3] - 48;
          else
            v16 = 0LL;
          if ( v16 )
          {
            v17 = -1073741773;
          }
          else
          {
            v17 = sub_1406C1234(((unsigned __int64)v13 + 351) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v17 >= 0 )
            {
              ObfReferenceObject(v13);
              v17 = sub_140729C30(v13, 0LL, 0, 0LL, (__int64)&v26);
              v18 = sub_140347DB0();
              CurrentThread = KeGetCurrentThread();
              --*((_WORD *)CurrentThread + 242);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 180), 0LL);
              if ( v17 < 0 )
              {
                v21 = *(_QWORD *)v14;
                v22 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) == v14 && *v22 == v14 )
                {
                  *v22 = v21;
                  *(_QWORD *)(v21 + 8) = v22;
LABEL_32:
                  --v18[182];
                  ObfDereferenceObject(Object);
LABEL_16:
                  ExReleasePushLockEx((ULONG_PTR)(v18 + 180), 0LL);
                  sub_1402F9540((__int64)KeGetCurrentThread());
                  if ( v17 >= 0 )
                    *a1 = v26;
                  return (unsigned int)v17;
                }
              }
              else
              {
                if ( (v13[42] & 2) == 0 )
                {
                  v20 = Object;
                  *(_QWORD *)(v14 + 16) = Object;
                  v20[40] = v14;
                  goto LABEL_16;
                }
                v23 = *(_QWORD *)v14;
                v24 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) == v14 && *v24 == v14 )
                {
                  *v24 = v23;
                  *(_QWORD *)(v23 + 8) = v24;
                  goto LABEL_32;
                }
              }
              __fastfail(3u);
            }
          }
          ObfDereferenceObject(v13);
          return (unsigned int)v17;
        }
        v9 = v12;
      }
    }
    ExFreePoolWithTag(0LL, 0x534E624Fu);
    return (unsigned int)v9;
  }
  return result;
}
