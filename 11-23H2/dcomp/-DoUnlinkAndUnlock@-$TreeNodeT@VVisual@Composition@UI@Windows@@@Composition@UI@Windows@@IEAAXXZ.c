/*
 * XREFs of ?DoUnlinkAndUnlock@?$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@IEAAXXZ @ 0x18006AA84
 * Callers:
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?RemoveAll@Api@VisualCollection@Composition@UI@Windows@@UEAAJXZ @ 0x18006A980 (-RemoveAll@Api@VisualCollection@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::TreeNodeT<Windows::UI::Composition::Visual>::DoUnlinkAndUnlock(_QWORD *a1)
{
  volatile signed __int32 **v1; // rdx
  bool v2; // cf
  __int64 v4; // rcx
  volatile signed __int32 *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rax

  v1 = (volatile signed __int32 **)(a1 - 17);
  v2 = a1 != 0LL;
  v4 = *a1;
  v5 = (volatile signed __int32 *)((unsigned __int64)v1 & -(__int64)v2);
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 144);
    v1 = (volatile signed __int32 **)(a1 + 3);
    if ( (volatile signed __int32 *)v6 == v5 )
    {
      *(_QWORD *)(v4 + 144) = a1[2];
      v7 = a1[2];
      if ( v7 )
        *(_QWORD *)(v7 + 160) = *v1;
    }
    else
    {
      v9 = a1[2];
      v10 = *v1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 160) = v10;
        *((_QWORD *)*v1 + 19) = a1[2];
      }
      else
      {
        *(_QWORD *)(v6 + 160) = v10;
        *((_QWORD *)*v1 + 19) = 0LL;
      }
    }
    *a1 = 0LL;
    a1[2] = 0LL;
    *v1 = v5;
  }
  result = (unsigned int)_InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(v1) = 1;
    return (*(__int64 (__fastcall **)(volatile signed __int32 *, volatile signed __int32 **, _QWORD *))(*(_QWORD *)v5 + 64LL))(
             v5,
             v1,
             a1);
  }
  return result;
}
