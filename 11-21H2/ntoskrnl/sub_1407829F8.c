/*
 * XREFs of sub_1407829F8 @ 0x1407829F8
 * Callers:
 *     sub_1407827F0 @ 0x1407827F0 (sub_1407827F0.c)
 *     sub_140A2DA0C @ 0x140A2DA0C (sub_140A2DA0C.c)
 *     sub_140A2EF0C @ 0x140A2EF0C (sub_140A2EF0C.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14086240C @ 0x14086240C (sub_14086240C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407829F8(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  __int64 v5; // rbp
  void *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  _QWORD *v12; // r15
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx

  v4 = 0;
  v5 = a3;
  *a4 = 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  v11 = *(_DWORD *)(a2 + 64);
  if ( (v11 & 4) != 0 )
  {
    v4 = -1073740697;
    goto LABEL_5;
  }
  if ( (v11 & 2) == 0 )
  {
    v4 = sub_1406C1D24(a1, a2);
    if ( v4 < 0 )
      goto LABEL_5;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v6 = (void *)sub_14086240C();
        if ( !v6 )
          goto LABEL_24;
      }
      v14 = sub_140772AA0(*a1);
    }
    else
    {
      if ( *a1 )
        v17 = *(_QWORD *)(*a1 + 224);
      else
        v17 = 0LL;
      v14 = sub_14077FFEC(v17, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, (__int64)a4);
    }
    v4 = v14;
    goto LABEL_5;
  }
  v12 = (_QWORD *)(a2 + 104 + 8 * v5);
  if ( *v12 )
  {
LABEL_4:
    *a4 = *v12;
    goto LABEL_5;
  }
  v4 = sub_1406C1D24(a1, a2);
  if ( v4 >= 0 )
  {
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v6 = (void *)sub_14086240C();
        if ( !v6 )
        {
LABEL_24:
          v4 = -1073741595;
          goto LABEL_5;
        }
      }
      v15 = sub_140772A24(
              *a1,
              *(_QWORD *)(a2 + 96),
              qword_140007080[v5],
              0,
              0x2000000u,
              (__int64)v6,
              a2 + 104 + 8 * v5,
              0LL);
    }
    else
    {
      if ( *a1 )
        v16 = *(_QWORD *)(*a1 + 224);
      else
        v16 = 0LL;
      v15 = sub_14077FFEC(v16, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, a2 + 104 + 8 * v5);
    }
    v4 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
  }
LABEL_5:
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v4 == -1073741275 || v4 == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)v4;
}
